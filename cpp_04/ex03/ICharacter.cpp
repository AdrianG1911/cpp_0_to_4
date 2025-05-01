#include "ICharacter.hpp"

ICharacter::ICharacter() {
    std::cout << "ICharacter default constructor\n";
}

ICharacter::ICharacter(const ICharacter& other) {
    std::cout << "ICharacter copy constructor\n";
    *this = other;
}

ICharacter& ICharacter::operator=(const ICharacter& other) {
    std::cout << "ICharacter copy assignment\n";
    if (this != &other) {
        
        // Copy fields here
    }
    return *this;
}

ICharacter::~ICharacter() {
    std::cout << "ICharacter destructor\n";
}
