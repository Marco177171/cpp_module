/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 19:13:52 by masebast          #+#    #+#             */
/*   Updated: 2023/02/03 18:28:50 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main(void) {
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

	delete bob;
	delete me;
	delete src;

	std::cout << "PERSONAL TESTS (DROPPING)" << std::endl;

	Character *jason = new Character("jason");
	Character *target = new Character("target");
	MateriaSource *ms = new MateriaSource();
	ms->learnMateria(new Ice());
	ms->learnMateria(new Cure());

	AMateria *AM;

	AM = ms->createMateria("ice");
	jason->equip(AM);
	AM = ms->createMateria("cure");
	jason->equip(AM);

	jason->use(0, *target);
	jason->use(1, *target);

	jason->unequip(0);
	jason->unequip(1);

	delete jason;
	delete target;
	delete AM;
	delete ms;

	return (0);
}