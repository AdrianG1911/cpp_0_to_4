/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrgutie <adrgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 16:45:47 by adrgutie          #+#    #+#             */
/*   Updated: 2025/04/09 18:46:23 by adrgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string& Weapon::getType() const
{
	return (type);
}

void Weapon::setType(const std::string& type)
{
	this->type = type;
}

Weapon::Weapon(std::string type) : type(type) {};
