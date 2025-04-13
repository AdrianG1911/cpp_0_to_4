#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap()
{
	std::cout << "FragTrap created\n";
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap copied\n";
}

FragTrap &FragTrap::operator=(const FragTrap &rhs)
{
	if (this != &rhs)
}
