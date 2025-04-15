#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Cat default constructor\n";
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(const Cat& other) : Animal(other) {
    std::cout << "Cat copy constructor\n";
    *brain = Brain(*other.brain);
    *this = other;
}

Cat& Cat::operator=(const Cat& other) {
    std::cout << "Cat copy assignment\n";
    if (this != &other) {
        Animal::operator=(other);
        this->brain = other.brain;
        // Copy fields here
    }
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat destructor\n";
    delete(brain);
}

void Cat::makeSound() const
{
    std::cout << "MEOW!\n";
}

Brain *Cat::get_brain()
{
    return (brain);
}