#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
    std::cout << "Ice default constructor\n";
}

Ice::Ice(const Ice& other) : AMateria(other) {
    std::cout << "Ice copy constructor\n";
}

Ice& Ice::operator=(const Ice& other) {
    std::cout << "Ice copy assignment\n";
    if (this != &other) {
        AMateria::operator=(other);
    }
    return *this;
}

Ice::~Ice() {
    std::cout << "Ice destructor\n";
}

AMateria *Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() + " *\n";
}
