#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {
public:
    Ice();                            // Default constructor
    Ice(const Ice& other);  // Copy constructor
    Ice& operator=(const Ice& other); // Copy assignment
    ~Ice();                           // Destructor

    AMateria* clone() const;
    virtual void use(ICharacter& target);
    // Add your members here
};

#endif // ICE_HPP
