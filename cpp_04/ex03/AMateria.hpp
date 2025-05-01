#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"
#include <iostream>

class AMateria
{
protected:
    std::string type;
public:
    AMateria();                            // Default constructor
    AMateria(const AMateria& other);  // Copy constructor
    AMateria& operator=(const AMateria& other); // Copy assignment
    virtual ~AMateria();                           // Destructor
    AMateria(std::string const & type);

    std::string const & getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif // AMATERIA_HPP
