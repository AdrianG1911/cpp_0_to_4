#include "Ice.hpp"

Ice::Ice() {
    std::cout << "Ice default constructor\n";
    this->type = "ice";
}

Ice::Ice(const Ice& other) : AMateria(other) {
    std::cout << "Ice copy constructor\n";
    this->type = other.type;
}

Ice& Ice::operator=(const Ice& other) {
    std::cout << "Ice copy assignment\n";
    if (this != &other) {
        AMateria::operator=(other);
        // Copy fields here
    }
    return *this;
}

Ice::~Ice() {
    std::cout << "Ice destructor\n";
}

Ice::Ice (const std::string& type)
{
    this->type = type;
    std::cout << "Made ice materia: " << type + "\n";
}

AMateria *Ice::clone() const
{
	return (new Ice(*this));
}