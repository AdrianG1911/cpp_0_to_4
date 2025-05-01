#ifndef CHARACTER_HPP
#define CHARACTER_HPP


#include <iostream>

class Character {
public:
    Character();                            // Default constructor
    Character(const Character& other);  // Copy constructor
    Character& operator=(const Character& other); // Copy assignment
    ~Character();                           // Destructor

private:
    // Add your members here
};

#endif // CHARACTER_HPP
