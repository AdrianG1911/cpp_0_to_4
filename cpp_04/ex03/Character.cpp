

#include "Character.hpp"

Character::Character() 
{
    std::cout << "Character default constructor\n";
    this->name = "no_name";
    for (int i = 0; i < 4; ++i)
    {
        this->materia[i] = 0;
    }
}

Character::Character(const Character& other) : ICharacter(other)
{
    std::cout << "Character copy constructor\n";
    this->name = other.name;
    for (int i = 0; i < 4; ++i)
    {
        if (other.materia[i] != 0)
            this->materia[i] = other.materia[i]->clone();
        else
            this->materia[i] = 0;
    }
}

Character& Character::operator=(const Character& other) {
    std::cout << "Character copy assignment\n";
    if (this != &other) {
        this->name = other.name;
        for (int i = 0; i < 4; ++i)
        {
            delete this->materia[i];
            if (other.materia[i] != 0)
                this->materia[i] = other.materia[i]->clone();
            else
                this->materia[i] = 0;
        }
    }
    return *this;
}

Character::~Character() {
    std::cout << "Character destructor\n";
    for (int i = 0; i < 4; ++i)
    {
        delete this->materia[i];
        this->materia[i] = 0;
    }
}

Character::Character(const std::string &name)
{
    this->name = name;
    for (int i = 0; i < 4; ++i)
    {
        this->materia[i] = 0;
    }
    std::cout << "Character " << name << " constructed\n";
}

std::string const &Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria *m)
{
    int i;
    for (i = 0; i < 4; ++i)
    {
        if (this->materia[i] == 0)
        {
            this->materia[i] = m;
            std::cout << "Materia " << m->getType() << " equiped\n";
            break ;
        }
    }
    if (i == 4)
        std::cout << "Inventory full\n";
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3)
    {
        std::cout << "index out of range\n";
        return ;
    }
    if (this->materia[idx] == 0)
    {
        std::cout << "Nothing unequiped\n";
    }
    else
    {
        std::cout << this->materia[idx]->getType() << " unequiped\n";
    }
    this->materia[idx] = 0;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx < 0 || idx > 3)
    {
        std::cout << "idx out of range\n";
        return ;
    }
    if (this->materia[idx] == 0)
    {
        std::cout << "that inventory slot is empty\n";
        return ;
    }
    this->materia[idx]->use(target);
}
