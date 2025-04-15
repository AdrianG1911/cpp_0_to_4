#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <iostream>

class Cat : public Animal {
public:
    Cat();                            // Default constructor
    Cat(const Cat& other);  // Copy constructor
    Cat& operator=(const Cat& other); // Copy assignment
    ~Cat();                           // Destructor
    void makeSound() const;
private:
    // Add your members here
};

#endif // CAT_HPP
