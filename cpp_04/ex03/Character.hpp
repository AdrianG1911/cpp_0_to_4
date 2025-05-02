#ifndef CHARACTER_HPP
#define CHARACTER_HPP

class ICharacter;

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <iostream>

class Character : public ICharacter {
private:
    std::string name;
    AMateria*   materia[4];
public:
    Character();                            // Default constructor
    Character(const Character& other);  // Copy constructor
    Character& operator=(const Character& other); // Copy assignment
    ~Character();                           // Destructor
    Character(const std::string& name);
    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};

#endif // CHARACTER_HPP
