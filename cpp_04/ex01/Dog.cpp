#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Dog default constructor\n";
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const Dog& other) : Animal(other) {
    std::cout << "Dog copy constructor\n";
    *this = other;
}

Dog& Dog::operator=(const Dog& other) {
    std::cout << "Dog copy assignment\n";
    if (this != &other) {
        Animal::operator=(other);
        // Copy fields here
    }
    return *this;
}

Dog::~Dog() {
    std::cout << "Dog destructor\n";
    delete(brain);
}

void Dog::makeSound() const
{
    std::cout << "WOOF!\n";
}
