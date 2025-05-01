#include "Character.hpp"

Character::Character() {
    std::cout << "Character default constructor\n";
}

Character::Character(const Character& other) {
    std::cout << "Character copy constructor\n";
    *this = other;
}

Character& Character::operator=(const Character& other) {
    std::cout << "Character copy assignment\n";
    if (this != &other) {
        
        // Copy fields here
    }
    return *this;
}

Character::~Character() {
    std::cout << "Character destructor\n";
}
