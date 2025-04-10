/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrgutie <adrgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 16:45:24 by adrgutie          #+#    #+#             */
/*   Updated: 2025/04/08 16:45:24 by adrgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"
#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char *argv[])
{
	if (argc != 4)
		return (1);
	if (argv[1][0] == '\0' || argv[2][0] == '\0')
		return (1);
	Replacer replacer(argv[1], argv[2], argv[3]);
	replacer.replace();
}