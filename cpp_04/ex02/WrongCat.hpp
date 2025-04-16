#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal {
public:
    WrongCat();                            // Default constructor
    WrongCat(const WrongCat& other);  // Copy constructor
    WrongCat& operator=(const WrongCat& other); // Copy assignment
    ~WrongCat();                           // Destructor
    void makeSound() const;
private:
    // Add your members here
};

#endif // WRONGCAT_HPP
