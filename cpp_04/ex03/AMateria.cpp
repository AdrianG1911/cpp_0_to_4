#include "AMateria.hpp"

AMateria::AMateria() {
    std::cout << "AMateria default constructor\n";
    this->type = "no type";
}

AMateria::AMateria(const AMateria& other) {
    std::cout << "AMateria copy constructor\n";
    this->type = other.type;
}

AMateria& AMateria::operator=(const AMateria& other) {
    std::cout << "AMateria copy assignment\n";
    if (this != &other) {
        this->type = other.type;
    }
    return *this;
}

AMateria::~AMateria() {
    std::cout << "AMateria destructor\n";
}

AMateria::AMateria(std::string const & type) : type(type)
{
    std::cout << "Made materia: " << type + "\n";
}

std::string const &AMateria::getType() const
{
	return (this->type);
}
