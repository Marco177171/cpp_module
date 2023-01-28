/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 17:21:46 by masebast          #+#    #+#             */
/*   Updated: 2023/01/28 17:44:06 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	ClapTrap clyde("Clyde");
	ScavTrap bonny("Bonny");
	ScavTrap copyOfBonny(bonny);
	ScavTrap guido = copyOfBonny;
	FragTrap marco("Marco");
	FragTrap copyOfMarco(marco);
	FragTrap paolo = copyOfMarco;
	DiamondTrap diamante("Diamante");
	DiamondTrap copyOfDiamante(diamante);
	DiamondTrap zircone = diamante;

	std::cout << "- ClapTrap Actions -" << std::endl;
	clyde.attack("Bonny");
	clyde.takeDamage(5);
	clyde.beRepaired(4);
	std::cout << "- ScavTrap Actions -" << std::endl;
	bonny.attack("Clyde");
	bonny.takeDamage(10);
	bonny.beRepaired(5);
	std::cout << "- ScavTrap copy Actions -" << std::endl;
	copyOfBonny.attack("Bonny");
	copyOfBonny.takeDamage(10);
	copyOfBonny.beRepaired(5);
	std::cout << "- ScavTrap operator copy Actions -" << std::endl;
	guido.attack("Bonny");
	guido.takeDamage(10);
	guido.beRepaired(5);
	std::cout << "- FragTrap Actions -" << std::endl;
	marco.attack("Bonny");
	marco.takeDamage(10);
	marco.beRepaired(5);
	std::cout << "- FragTrap copy Actions -" << std::endl;
	copyOfMarco.attack("Paolo");
	copyOfMarco.takeDamage(4);
	copyOfMarco.beRepaired(3);
	std::cout << "- FragTrap operator copy Actions -" << std::endl;
	paolo.attack("Bonny");
	paolo.takeDamage(4);
	paolo.beRepaired(3);
	std::cout << "- DiamondTrap Actions -" << std::endl;
	diamante.attack("Tanos");
	diamante.takeDamage(5);
	diamante.beRepaired(4);
	bonny.guardGate();
	copyOfBonny.guardGate();
	guido.guardGate();
	marco.highFiveGuys();
	copyOfMarco.highFiveGuys();
	paolo.highFiveGuys();
	diamante.whoAmI();
	copyOfDiamante.whoAmI();
	zircone.whoAmI();
	return (0);
}