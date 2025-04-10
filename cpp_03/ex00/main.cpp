/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrgutie <adrgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 20:11:49 by adrgutie          #+#    #+#             */
/*   Updated: 2025/04/09 21:57:16 by adrgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main()
{
	ClapTrap ct("Angry Robot");
	ct.attack("Other Robot");
	ct.takeDamage(5);
	ct.beRepaired(3);
	ct.takeDamage(10);
	ct.attack("Other Robot");
}