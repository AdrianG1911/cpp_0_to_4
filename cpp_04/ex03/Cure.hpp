#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria {
public:
    Cure();                            // Default constructor
    Cure(const Cure& other);  // Copy constructor
    Cure& operator=(const Cure& other); // Copy assignment
    ~Cure();                           // Destructor

    AMateria* clone() const;
    virtual void use(ICharacter& target);
    // Add your members here
};

#endif // CURE_HPP
