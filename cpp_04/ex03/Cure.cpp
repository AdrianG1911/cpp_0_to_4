#include "Cure.hpp"

Cure::Cure() {
    std::cout << "Cure default constructor\n";
    this->type = "cure";
}

Cure::Cure(const Cure& other) : AMateria(other) {
    std::cout << "Cure copy constructor\n";
    this->type = other.type;
}

Cure& Cure::operator=(const Cure& other) {
    std::cout << "Cure copy assignment\n";
    if (this != &other) {
        AMateria::operator=(other);
        this->type = other.type;
    }
    return *this;
}

Cure::~Cure() {
    std::cout << "Cure destructor\n";
}

Cure::Cure (const std::string& type)
{
    this->type = type;
    std::cout << "Made cure materia: " << type + "\n";
}

AMateria *Cure::clone() const
{
    return new Cure(*this);
}
