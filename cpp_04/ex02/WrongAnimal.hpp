#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP


#include <iostream>

class WrongAnimal {
public:
    WrongAnimal();                            // Default constructor
    WrongAnimal(const WrongAnimal& other);  // Copy constructor
    WrongAnimal& operator=(const WrongAnimal& other); // Copy assignment
    ~WrongAnimal();                           // Destructor
    void makeSound() const;
    std::string getType(void) const;
protected:
    std::string type;
};

#endif // WRONGANIMAL_HPP
