/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrgutie <adrgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 22:13:44 by adrgutie          #+#    #+#             */
/*   Updated: 2025/04/07 22:35:53 by adrgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main()
{
	std::string string = "HI THIS IS BRAIN.";
	std::string *stringPTR = &string;
	std::string& stringREF = string;

	std::cout << &string << "\n";
	std::cout << stringPTR << "\n";
	std::cout << &stringREF << "\n";

	std::cout << string << "\n";
	std::cout << *stringPTR << "\n";
	std::cout << stringREF << "\n";
}