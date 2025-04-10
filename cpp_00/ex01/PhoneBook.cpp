/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrgutie <adrgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 01:14:18 by adrgutie          #+#    #+#             */
/*   Updated: 2025/04/03 12:51:37 by adrgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string trunkatedDisplay(const std::string &str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	else
		return (str);
}

void PhoneBook::displayContact(int i) const
{
	std::cout << "|" << std::setw(10) << i \
		<< "|" << std::setw(10) << trunkatedDisplay(contacts[i].getFirstName()) \
		<< "|" << std::setw(10) << trunkatedDisplay(contacts[i].getLastName()) \
		<< "|" << std::setw(10) << trunkatedDisplay(contacts[i].getNickname()) << "|\n";
}

void PhoneBook::displayContacts() const
{
	std::cout << "|" << std::setw(10) << "Index" \
		<< "|" << std::setw(10) << "First Name" \
		<< "|" << std::setw(10) << "Last Name" \
		<< "|" << std::setw(10) << "Nickname" << "|\n";
	for (int i = 0; i < contactCount; i++)
		displayContact(i);
}

void PhoneBook::addContact(const Contact &contact)
{
	if (contactCount < 8)
	{
		contacts[oldestContact] = contact;
		oldestContact++;
		contactCount++;
	}
	else
	{
		if (oldestContact == 8)
			oldestContact = 0;
		contacts[oldestContact] = contact;
		oldestContact++;
	}
}

void PhoneBook::displayContactInformaiton(int index) const
{
	if (index > 7 || index < 0)
		std::cout << "index out of range (0 to 7)\n";
	else if (index >= contactCount)
		std::cout << "there is no contact in that index yet\n";
	else
	{
		std::cout << std::setw(20) << "First Name: ";
		std::cout << contacts[index].getFirstName() << "\n";
		std::cout << std::setw(20) << "Last Name: ";
		std::cout << contacts[index].getLastName() << "\n";
		std::cout << std::setw(20) << "Nickname: ";
		std::cout << contacts[index].getNickname() << "\n";
		std::cout << std::setw(20) << "Phone Number: ";
		std::cout << contacts[index].getPhoneNumber() << "\n";
		std::cout << std::setw(20) << "Darkest Secret: ";
		std::cout << contacts[index].getDarkestSecret() << "\n";
	}
}

