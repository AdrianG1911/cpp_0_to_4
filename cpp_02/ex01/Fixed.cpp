/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrgutie <adrgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:50:24 by adrgutie          #+#    #+#             */
/*   Updated: 2025/04/09 19:01:13 by adrgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

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

Fixed::Fixed(const int num) : value(num * (1 << fractional_bits))
{
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float num) : value(static_cast<int>(std::roundf(num * (1 << fractional_bits))))
{
	std::cout << "Float constructor called\n";
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(value) / (1 << fractional_bits));
}

int Fixed::toInt(void) const
{
	return (value / (1 << fractional_bits));
}

std::ostream &operator<<(std::ostream &o, const Fixed &fixed)
{
	o << fixed.toFloat();
	return (o);
}