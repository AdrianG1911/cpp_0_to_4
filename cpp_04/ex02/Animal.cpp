#include "Animal.hpp"
#include <iostream>

Animal::Animal() {
    type = "none";
    std::cout << "Animal default constructor\n";
}

Animal::Animal(const Animal& other) {
    std::cout << "Animal copy constructor\n";
    *this = other;
}

Animal& Animal::operator=(const Animal& other) {
    std::cout << "Animal copy assignment\n";
    if (this != &other) {
        // Copy fields here
        this->type = other.type;
    }
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal destructor\n";
}

std::string Animal::getType(void) const
{
	return this->type;
}

void Animal::setType(std::string type)
{
    this->type = type;
}