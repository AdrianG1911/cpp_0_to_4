/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrgutie <adrgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:50:24 by adrgutie          #+#    #+#             */
/*   Updated: 2025/04/09 18:59:17 by adrgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//default constructor
Fixed::Fixed() : value(0) {
	std::cout << "Default constuctor called\n";
};

//copy constructor
Fixed::Fixed(const Fixed& other) : value(other.value) {
	std::cout << "Copy constuctor called\n";
};

//copy assignment operator
Fixed& Fixed::operator=(const Fixed& rhs) {
	std::cout << "Copy assignment operator called\n";
	if (this != &rhs) {
		value = rhs.value;
	}
	return *this;
}

//destructor
Fixed::~Fixed() {
	std::cout << "Destructor called\n";
};

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	this->value = raw;
}


