#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>

class Animal {
public:
    Animal();                            // Default constructor
    Animal(const Animal& other);  // Copy constructor
    Animal& operator=(const Animal& other); // Copy assignment
    virtual ~Animal();                           // Destructor
    virtual void makeSound() const = 0;
    std::string getType(void) const;
    void setType(std::string type);

protected:
    std::string type;
};

#endif // ANIMAL_HPP
