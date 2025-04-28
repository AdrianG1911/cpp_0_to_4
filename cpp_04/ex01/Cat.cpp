#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Cat default constructor\n";
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(const Cat& other) : Animal(other) {
    std::cout << "Cat copy constructor\n";
    if (other.brain != NULL)
        brain = new Brain(*other.brain);
    this->type = other.type;
}

Cat& Cat::operator=(const Cat& other) {
    std::cout << "Cat copy assignment\n";
    if (this != &other) {
        Animal::operator=(other);
        if (other.brain != NULL) {
            delete this->brain;
            this->brain = new Brain(*other.brain);
            this->type = other.type;
        }
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