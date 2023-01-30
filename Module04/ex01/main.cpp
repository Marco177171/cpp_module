/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:50:55 by masebast          #+#    #+#             */
/*   Updated: 2023/01/30 17:16:08 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	delete j;//should not create a leak delete i;
	delete i;

	int index;
	Animal *(animalList[10]);

	index = 0;
	while (index < 10)
	{
		if (index < 5)
			animalList[index] = new Dog();
		else
			animalList[index] = new Cat();
		index++;
	}
	index = -1;
	while (++index < 10)
		delete (animalList[index]);
	return (0);
}