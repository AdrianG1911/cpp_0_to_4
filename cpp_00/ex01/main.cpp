#include "PhoneBook.hpp"


bool is_number(const std::string &num)
{
	int	len = num.length();
	for (int i = 0; i < len; i++)
	{
		if (num[i] < '0' || num[i] > '9')
			return (false);
	}
	return (true);
}

void	pb_add(PhoneBook &pb)
{
	Contact contact;

	std::string	info[5];
	std::string input;
	info[0] = "First name: ";
	info[1] = "Last name: ";
	info[2] = "Nickname: ";
	info[3] = "Phone number: ";
	info[4] = "Darkest secret: ";
	std::cout << "Please enter contact information: \n";
	for (int i = 0; i < 5; i++)
	{
		std::cout << info[i];
		std::cin >> input;
		if (input.length() == 0)
		{
			std::cout << "Field cannot be empty\n";
			i--;
			continue ;
		}
		if (info[i] == "Phone number: ")
		{
			if (is_number(input) == false)
			{
				std::cout << "Enter only numbers for phone number\n";
				i--;
				continue ;
			}
		}
		if (info[i] == "First name: ")
			contact.setFirstName(input);
		else if (info[i] == "Last name: ")
			contact.setLastName(input);
		else if (info[i] == "Nickname: ")
			contact.setNickname(input);
		else if (info[i] == "Phone number: ")
			contact.setPhoneNumber(input);
		else if (info[i] == "Darkest secret: ")
			contact.setDarkestSecret(input);	
	}
	pb.addContact(contact);
}

int main()
{
	PhoneBook pb;
	while (1)
	{
		std::string command;
		std::cout << "Enter command: ";
		std::getline(std::cin, command);
		//std::cin >> command;
		if (command == "ADD")
			pb_add(pb);
		else if (command == "SEARCH")
		{
			std::string index;
			pb.displayContacts();
			std::cout << "Enter index: ";
			std::cin >> index;
			if (is_number(index) == false)
				std::cout << "Error not a number\n";
			else
				pb.displayContactInformaiton(std::stoi(index));
		}
		else if (command == "EXIT")
			break ;
		else
			std::cout << "Invalid command\nValid commands are: ADD, SEARCH, and, EXIT\n";
	}
    return (0);
}