/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrgutie <adrgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 16:45:05 by adrgutie          #+#    #+#             */
/*   Updated: 2025/04/13 17:13:40 by adrgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]\n"; 
	std::cout << "I love having extra bacon for my \
7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!\n\n";
}

void Harl::info(void)
{
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn't put \
enough bacon in my burger!\nIf you did, I wouldn't be asking for more!\n\n";
}

void Harl::warning(void)
{
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free.\nI've been coming for \
years, whereas you started working here just last month.\n\n";
}

void Harl::error(void)
{
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n\n";
}

void Harl::filt(std::string level)
{
	const int debug = 0;
	const int info = 1;
	const int warning = 2;
	const int error = 3;
	const int other = 4;

	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR", "OTHER"};
	int lvl = 4;
	for (int i = 0; i < 5; ++i) {
		if (level == levels[i]) {
			lvl = i;
		}
	}
	switch(lvl)
	{
		case other:
			std::cout << "[ Probably complaining about insignificant problems ]\n\n";
			break ;
		case debug:
			this->debug();
		case info:
			this->info();
		case warning:
			this->warning();
		case error:
			this->error();
	}
}
