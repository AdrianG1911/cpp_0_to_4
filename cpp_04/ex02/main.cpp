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
	std::cout << "\nThis cat has type " << animals[1]->getType() << std::endl;
	std::cout << "This cat has type " << animals[3]->getType() << std::endl;
	std::cout << "\n";

	Brain b1;
	Brain b2;
	b1.set_idea(0, "hide");
	b1.set_idea(1, "eat food");
	b2 = b1;
	b2.set_idea(1, "play");
	std::cout << "b1 index 0: " << b1.get_idea(0) + "\n";
	std::cout << "b2 index 0: " << b2.get_idea(0) + "\n";
	std::cout << "b1 index 1: " << b1.get_idea(1) + "\n";
	std::cout << "b2 index 1: " << b2.get_idea(1) + "\n\n";

	Cat *c1 = new Cat();
	Cat *c2 = new Cat();
	c1->get_brain()->set_idea(0, "play with yarn");
	c2->get_brain()->set_idea(0, "sleep");
	std::cout << "c1 brain index 0: " << c1->get_brain()->get_idea(0) + "\n";
	std::cout << "c2 brain index 0: " << c2->get_brain()->get_idea(0) + "\n";
	*c2 = *c1;
	std::cout << "c2 brain index 0: " << c2->get_brain()->get_idea(0) + "\n";
	delete c1;
	delete c2;

	Dog *d1 = new Dog();
	Dog *d2 = new Dog();
	d1->get_brain()->set_idea(0, "play with ball");
	d2->get_brain()->set_idea(0, "sleep");
	std::cout << "d1 brain index 0: " << d1->get_brain()->get_idea(0) + "\n";
	std::cout << "d2 brain index 0: " << d2->get_brain()->get_idea(0) + "\n";
	*d2 = *d1;
	std::cout << "d2 brain index 0: " << d2->get_brain()->get_idea(0) + "\n\n";
	delete d1;
	delete d2;
	for (int i = 0; i < 100; i++)
	{
		delete animals[i];
	}
}

// int main()
// {
// 	Animal animal;
// 	Cat cat;
// 	Dog dog;
// }