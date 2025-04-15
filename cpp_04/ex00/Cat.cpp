#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Cat default constructor\n";
    this->type = "Cat";
}

Cat::Cat(const Cat& other) : Animal(other) {
    std::cout << "Cat copy constructor\n";
    *this = other;
}

Cat& Cat::operator=(const Cat& other) {
    std::cout << "Cat copy assignment\n";
    if (this != &other) {
        Animal::operator=(other);
        // Copy fields here
    }
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat destructor\n";
}

void Cat::makeSound() const
{
    std::cout << "MEOW!\n";
}