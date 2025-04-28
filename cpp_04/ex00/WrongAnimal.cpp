#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    type = "none";
    std::cout << "WrongAnimal default constructor\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
    std::cout << "WrongAnimal copy constructor\n";
    *this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
    std::cout << "WrongAnimal copy assignment\n";
    if (this != &other) {
        this->type = other.type;
        // Copy fields here
    }
    return *this;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor\n";
}

void WrongAnimal::makeSound() const
{
    std::cout << this->type << " cant make a sound\n";
}

std::string WrongAnimal::getType(void) const
{
	return this->type;
}
