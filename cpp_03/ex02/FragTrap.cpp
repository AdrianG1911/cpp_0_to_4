#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap()
{
	std::cout << "FragTrap created\n";
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap " << other.name << " copied\n";
}

FragTrap &FragTrap::operator=(const FragTrap &rhs)
{
	if (this != &rhs) {
		ClapTrap::operator=(rhs);
	}
	std::cout << "FragTrap " << rhs.name << " was assigned\n";
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << " was destroyed\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap " << name << " was created!\n";
}

bool FragTrap::can_act(void) const
{
	if (hitPoints <= 0) {
		std::cout << "FragTrap " << name << " is dead. ;_;\n";
		return (false);
	}
	if (energyPoints <= 0) {
		std::cout << "FragTrap " << name << " is out of energy!\n";
		return (false);
	}
	else
		return (true);
}

void FragTrap::highFivesGuys(void)
{
	if (can_act() == true) {
		std::cout << "FragTrap " << name << " requests a high five!\n";
	}
}

void FragTrap::attack(const std::string &target)
{
	if (can_act() == true) {
		std::cout << "FragTrap " << name << " attacks " << target << " and deals " \
		<< attackDamage << " damage!\n";
	}
}
