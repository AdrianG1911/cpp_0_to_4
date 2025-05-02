#include "MateriaSource.hpp"
#include <iostream>


MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource default constructor\n";
	for (int i = 0; i < 4; ++i)
		this->materia[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	std::cout << "MateriaSource copy constructor\n";
    for (int i = 0; i < 4; ++i)
    {
        if (other.materia[i] != 0)
            this->materia[i] = other.materia[i]->clone();
        else
            this->materia[i] = 0;
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	std::cout << "MateriaSource copy assignment\n";
	if (this != &other)
	{
		for (int i = 0; i < 4; ++i)
        {
            delete this->materia[i];
            if (other.materia[i] != 0)
                this->materia[i] = other.materia[i]->clone();
            else
                this->materia[i] = 0;
        }
		
	}
	return (*this);
}

MateriaSource::~MateriaSource() {
    std::cout << "MateriaSource destructor\n";
    for (int i = 0; i < 4; ++i)
    {
        delete this->materia[i];
        this->materia[i] = 0;
    }
}

void MateriaSource::learnMateria(AMateria *m)
{
	std::cout << "learning materia " << m->getType() << "\n";
	for (int i = 0; i < 4; ++i)
	{
		if (this->materia[i] == 0)
		{
			this->materia[i] = m;
			break ;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	std::cout << "retrieving materia " << type << "\n";
	for (int i = 0; i < 4; ++i)
	{
		if (this->materia[i] == 0)
			continue ;
		if (this->materia[i]->getType() == type)
		{
			return (this->materia[i]->clone());
		}
	}
	return (0);
}
