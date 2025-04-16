#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Dog default constructor\n";
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const Dog& other) : Animal(other) {
    std::cout << "Dog copy constructor\n";
    brain = new Brain(*other.brain);
    this->type = other.type;
}

Dog& Dog::operator=(const Dog& other) {
    std::cout << "Dog copy assignment\n";
    if (this != &other) {
        Animal::operator=(other);
        delete this->brain;
        this->brain = new Brain(*other.brain);
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

Brain *Dog::get_brain(void)
{
	return (brain);
}