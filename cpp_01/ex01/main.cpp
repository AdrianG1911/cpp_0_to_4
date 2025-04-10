/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrgutie <adrgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 17:21:26 by adrgutie          #+#    #+#             */
/*   Updated: 2025/04/07 20:40:49 by adrgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie* horde = zombieHorde(10, "Zomboss");
	Zombie* front = horde;
	for (int i = 0; i < 10; i++)
	{
		horde[i].announce();
	}
	horde = front;
	delete[] horde;
	return (0);
}