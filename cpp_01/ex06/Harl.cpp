/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrgutie <adrgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 16:45:05 by adrgutie          #+#    #+#             */
/*   Updated: 2025/04/09 19:52:01 by adrgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my \
7XL-double-cheese-triple-pickle-specialketchup burger. I really do\n";
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put \
enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for \
years, whereas you started working here just last month.\n";
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::filt(std::string level)
{
	const int debug = 1;
	const int info = 2;
	const int warning = 3;
	const int error = 4;
	const int other = 100;

	int lvl;
	if (level == "DEBUG")
		lvl = debug;
	else if (level == "INFO")
		lvl = info;
	else if (level == "WARNING")
		lvl = warning;
	else if (level == "ERROR")
		lvl = error;
	else
		lvl = other;
	switch(lvl)
	{
		case debug:
			std::cout << "[ DEBUG ]\n";
			break ;
		case info:
			std::cout << "[ INFO ]\n";
			break ;
		case warning:
			std::cout << "[ WARNING ]\n";
			break ;
		case error:
			std::cout << "[ ERROR ]\n";
			break ;
		case other:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
			break ;
	}

	switch(lvl)
	{
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
