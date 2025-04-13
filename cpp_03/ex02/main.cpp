/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrgutie <adrgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 20:11:49 by adrgutie          #+#    #+#             */
/*   Updated: 2025/04/13 18:58:55 by adrgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap ar("Angry Robot");
	ScavTrap br = ar;
	ScavTrap cr;
	cr = ar;
	ar.attack("Other Robot");
	ar.guardGate();
	ar.takeDamage(5);
	ar.beRepaired(3);
	ar.takeDamage(100);
	ar.guardGate();
	ar.attack("Other Robot");
}