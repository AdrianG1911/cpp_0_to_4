#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public Animal {
public:
    Cat();                            // Default constructor
    Cat(const Cat& other);  // Copy constructor
    Cat& operator=(const Cat& other); // Copy assignment
    ~Cat();                           // Destructor
    void makeSound() const;
    Brain *get_brain(void);
private:
    Brain *brain;
};

#endif // CAT_HPP
