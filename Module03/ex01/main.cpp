/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 17:21:46 by masebast          #+#    #+#             */
/*   Updated: 2023/01/24 18:13:35 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap clyde("Clyde");
	ScavTrap bonny("Bonny");
	ScavTrap copyOfBonny(bonny);
	ScavTrap guido = copyOfBonny;

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
	bonny.guardGate();
	copyOfBonny.guardGate();
	guido.guardGate();
	return (0);
}