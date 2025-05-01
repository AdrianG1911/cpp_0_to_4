#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource() {
    std::cout << "IMateriaSource default constructor\n";
}

IMateriaSource::IMateriaSource(const IMateriaSource& other) {
    std::cout << "IMateriaSource copy constructor\n";
    *this = other;
}

IMateriaSource& IMateriaSource::operator=(const IMateriaSource& other) {
    std::cout << "IMateriaSource copy assignment\n";
    if (this != &other) {
        
        // Copy fields here
    }
    return *this;
}

IMateriaSource::~IMateriaSource() {
    std::cout << "IMateriaSource destructor\n";
}
