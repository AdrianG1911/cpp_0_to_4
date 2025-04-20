/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrgutie <adrgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 23:51:12 by adrgutie          #+#    #+#             */
/*   Updated: 2025/04/20 20:37:11 by adrgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iomanip>
# include <iostream>
# include <string>
# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int		contactCount = 0;
		int		oldestContact = 0;
		void	displayContact(int i) const;
	public:
		void	displayContacts() const;
		void	addContact(const Contact &contact);
		void	displayContactInformaiton(int index) const;
};

#endif