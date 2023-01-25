/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 17:21:46 by masebast          #+#    #+#             */
/*   Updated: 2023/01/25 13:28:03 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap clyde("Clyde");
	ScavTrap bonny("Bonny");
	ScavTrap copyOfBonny(bonny);
	ScavTrap guido = copyOfBonny;
	FragTrap marco("Marco");
	FragTrap copyOfMarco(marco);
	FragTrap paolo = copyOfMarco;

	clyde.attack("Bonny");
	clyde.takeDamage(5);
	clyde.beRepaired(4);
	bonny.attack("Clyde");
	bonny.takeDamage(10);
	bonny.beRepaired(5);
	copyOfBonny.attack("Bonny");
	copyOfBonny.takeDamage(10);
	copyOfBonny.beRepaired(5);
	guido.attack("Bonny");
	guido.takeDamage(10);
	guido.beRepaired(5);
	marco.attack("Bonny");
	marco.takeDamage(10);
	marco.beRepaired(5);
	copyOfMarco.attack("Paolo");
	copyOfMarco.takeDamage(4);
	copyOfMarco.beRepaired(3);
	paolo.attack("Bonny");
	paolo.takeDamage(4);
	paolo.beRepaired(3);
	bonny.guardGate();
	copyOfBonny.guardGate();
	guido.guardGate();
	marco.highFiveGuys();
	copyOfMarco.highFiveGuys();
	paolo.highFiveGuys();
	return (0);
}