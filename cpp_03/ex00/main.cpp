/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrgutie <adrgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 20:11:49 by adrgutie          #+#    #+#             */
/*   Updated: 2025/04/13 17:48:17 by adrgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main()
{
	ClapTrap ar("Angry Robot");
	ClapTrap br = ar;
	ClapTrap cr;
	cr = ar;
	ar.attack("Other Robot");
	ar.takeDamage(5);
	ar.beRepaired(3);
	ar.takeDamage(100);
	ar.attack("Other Robot");
}