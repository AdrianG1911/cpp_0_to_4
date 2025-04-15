#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public Animal {
public:
    Dog();                            // Default constructor
    Dog(const Dog& other);  // Copy constructor
    Dog& operator=(const Dog& other); // Copy assignment
    ~Dog();                           // Destructor
    void makeSound() const;
private:
    Brain *brain;
};

#endif // DOG_HPP
