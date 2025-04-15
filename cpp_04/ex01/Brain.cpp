#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain default constructor\n";
}

Brain::Brain(const Brain& other) {
    std::cout << "Brain copy constructor\n";
    *this = other;
}

Brain& Brain::operator=(const Brain& other) {
    std::cout << "Brain copy assignment\n";
    if (this != &other) {
        for (int i = 0; i < 100; i++) {
            this->ideas[i] = other.ideas[i];
        }
    }
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain destructor\n";
}

void Brain::set_idea(int index, std::string idea)
{
    this->ideas[index] = idea;
}

std::string Brain::get_idea(int index)
{
	return (ideas[index]);
}
