#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>

class Animal {
public:
    Animal();                            // Default constructor
    Animal(const Animal& other);  // Copy constructor
    Animal& operator=(const Animal& other); // Copy assignment
    virtual ~Animal();                           // Destructor
    virtual void makeSound() const;
    std::string getType(void) const;

protected:
    std::string type;
};

#endif // ANIMAL_HPP
