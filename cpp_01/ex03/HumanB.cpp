/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrgutie <adrgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 16:45:36 by adrgutie          #+#    #+#             */
/*   Updated: 2025/04/09 18:45:38 by adrgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <string>
#include <iostream>

HumanB::HumanB(std::string name, Weapon *weapon) : name(name), weapon(weapon) {};

void HumanB::attack() const
{
	if (weapon == nullptr)
		std::cout << name << " attacks with their " << "non existant weapon" << "\n";
	else
		std::cout << name << " attacks with their " << (*weapon).getType() << "\n";
}

void HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}
