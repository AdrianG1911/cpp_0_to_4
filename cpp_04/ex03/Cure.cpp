#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
    std::cout << "Cure default constructor\n";
}

Cure::Cure(const Cure& other) : AMateria(other) {
    std::cout << "Cure copy constructor\n";
}

Cure& Cure::operator=(const Cure& other) {
    std::cout << "Cure copy assignment\n";
    if (this != &other) {
        AMateria::operator=(other);
    }
    return *this;
}

Cure::~Cure() {
    std::cout << "Cure destructor\n";
}

AMateria *Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *\n";
}