/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrgutie <adrgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 20:11:49 by adrgutie          #+#    #+#             */
/*   Updated: 2025/04/28 19:06:58 by adrgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap ar("Angry Robot");
	FragTrap br = ar;
	FragTrap cr;
	cr = ar;
	ar.attack("Other Robot");
	ar.highFivesGuys();
	ar.takeDamage(5);
	ar.beRepaired(3);
	ar.takeDamage(100);
	ar.highFivesGuys();
	ar.attack("Other Robot");
}