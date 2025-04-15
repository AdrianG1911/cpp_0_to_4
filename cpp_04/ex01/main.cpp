#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	Animal* animals[100];

	for (int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		
	}
	animals[1]->setType("Cot");
	std::cout << "This cat has type " << animals[1]->getType() << std::endl;
	std::cout << "This cat has type " << animals[3]->getType() << std::endl;
	std::cout << "\n";
	animals[1]->get_brain();
	for (int i = 0; i < 100; i++)
	{
		delete animals[i];
	}
}