/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 17:21:46 by masebast          #+#    #+#             */
/*   Updated: 2023/01/24 17:26:26 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap clyde("Clyde");
	ScavTrap bonny("Bonny");
	ScavTrap copy_of_bonny(bonny);
	ScavTrap guido = copy_of_bonny;

	clyde.attack("Bonny");
	clyde.takeDamage(5);
	clyde.beRepaired(4);
	bonny.attack("Clyde");
	bonny.takeDamage(10);
	bonny.beRepaired(5);
	copy_of_bonny.attack("Bonny");
	copy_of_bonny.takeDamage(10);
	copy_of_bonny.beRepaired(5);
	guido.attack("Bonny");
	guido.takeDamage(10);
	guido.beRepaired(5);
	return (0);
}