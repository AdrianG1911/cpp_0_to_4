#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
Animal* meta = new Animal();
Animal* j = new Dog();
Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
delete j;
j = new Animal();
*j = *i;
j->makeSound();
delete j;
delete i;
delete meta;
const WrongAnimal* wmeta = new WrongAnimal();
const WrongAnimal* wi = new WrongCat();
std::cout << wi->getType() << " " << std::endl;
wi->makeSound();
wmeta->makeSound();
delete wmeta;
delete wi;
return 0;
}