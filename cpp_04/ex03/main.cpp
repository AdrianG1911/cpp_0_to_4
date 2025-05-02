#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <iostream>



int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->unequip(1);
	std::cout << tmp->getType() << "\n";
	Character newguy("ng");
	newguy.equip(tmp);
	Character newguy2;
	newguy2 = newguy;
	std::cout << newguy2.getName() << "\n";
	newguy2.use(0, newguy);

	delete bob;
	delete me;
	delete src;
	return 0;
}
