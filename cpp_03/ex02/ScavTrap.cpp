/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrgutie <adrgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 21:37:08 by adrgutie          #+#    #+#             */
/*   Updated: 2025/04/13 18:58:20 by adrgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() {}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
	std::cout << "ScavTrap " << name << " copied\n";
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs)
{
	if (this != &rhs) {
		ClapTrap::operator=(rhs);
	}
	std::cout << "ScavTrap " << name << " has been assigned!\n";
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name << " was destroyed!\n";  
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "ScavTrap " << name << " has been created!\n";
}

void ScavTrap::guardGate()
{
	if (this->can_act() == true)
		std::cout << "ScavTrap " << name  << " entered Gate keeper mode!\n";
}

void ScavTrap::attack(const std::string &target)
{
	if (this->can_act() == true) {
		this->energyPoints -= 1;
		std::cout << "ScavTrap " << name << " attacks " \
		<< target << ", causing " << attackDamage << " points of damage!\n";
	}
}

bool ScavTrap::can_act(void) const
{
	if (hitPoints <= 0) {
		std::cout << "ScavTrap " << name << " is dead! ;-;\n";
		return (false);
	}
	else if (energyPoints <= 0) {
		std::cout << "ScavTrap " << name << " has no energy points!\n";
		return (false);
	}
	return (true);
}