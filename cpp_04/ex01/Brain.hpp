#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain {
public:
    Brain();                            // Default constructor
    Brain(const Brain& other);  // Copy constructor
    Brain& operator=(const Brain& other); // Copy assignment
    ~Brain();                           // Destructor
    void set_idea(int index, std::string idea);
    std::string get_idea(int index);

private:
    std::string ideas[100];
};

#endif // BRAIN_HPP
