/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrgutie <adrgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:42:50 by adrgutie          #+#    #+#             */
/*   Updated: 2025/04/09 21:41:34 by adrgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "ClapTrap created\n";
}

ClapTrap::ClapTrap(const ClapTrap &other)
		: name(other.name), hitPoints(other.hitPoints),
		energyPoints(other.energyPoints), attackDamage(other.attackDamage) {
	std::cout << "ClapTrap " << name  << " copied\n";
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {
	std::cout << "ClapTrap " << name  << " assigned\n";
	if (this != &rhs) {
		name = rhs.name;
		hitPoints = rhs.hitPoints;
		attackDamage = rhs.attackDamage;
		energyPoints = rhs.energyPoints;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called\n";
}

void ClapTrap::attack(const std::string &target)
{
	this->energyPoints -= 1;
	std::cout << "ClapTrap " << name << " attacks " \
	<< target << ", causing " << attackDamage << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->hitPoints -= amount;
	std::cout << "ClapTrap " << name << " takes " \
	<< amount << " points of damage!\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->energyPoints -= 1;
	this->hitPoints += amount;
	std::cout << "ClapTrap " << name << " regains " \
	<< amount << " hit points!\n";
}

ClapTrap::ClapTrap(std::string name) : name(name) {
	std::cout << "ClapTrap " << name << " created!\n";
};