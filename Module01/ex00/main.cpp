/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:56:56 by masebast          #+#    #+#             */
/*   Updated: 2023/01/09 16:56:57 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::cout << "so many dead people...let's summon one!\n" << std::endl;
	Zombie z1("first");
	std::cout << std::endl << "Now, let's summon a Zombie from the heap" << std::endl;
	Zombie *z2 = newZombie("Heap Zombie");
	std::cout << "let's call a zombie from the main file" << std::endl;
	z2->announce();
	std::cout << std::endl << "Calling a zombie on the stack...he will re-die soon" << std::endl;
	randomChump("Stack Zombie");
	std::cout << std::endl << "see you!" << std::endl;
	std::cout << std::endl << "un-leaking heap Zombie..." << std::endl;
	delete z2;

	return (0);
}
