/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 18:20:36 by masebast          #+#    #+#             */
/*   Updated: 2023/01/28 18:33:03 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
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