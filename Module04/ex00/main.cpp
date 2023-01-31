/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 18:20:36 by masebast          #+#    #+#             */
/*   Updated: 2023/01/31 18:34:09 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound! j->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << wrongMeta->getType() << " " << std::endl;
	std::cout << wrongCat->getType() << " " << std::endl;
	wrongMeta->makeSound();
	wrongCat->makeSound();

	std::cout << "PERSONAL TESTS" << std::endl;

	Cat cat;
	Cat copyOfCat(cat);
	Cat catOperatorCopy = copyOfCat;
	Dog dog;
	Dog copyOfDog(dog);
	Dog dogOperatorCopy = copyOfDog;

	cat.makeSound();
	copyOfCat.makeSound();
	catOperatorCopy.makeSound();
	dog.makeSound();
	copyOfDog.makeSound();
	dogOperatorCopy.makeSound();
	return (0);
}