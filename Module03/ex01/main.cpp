/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 17:21:46 by masebast          #+#    #+#             */
/*   Updated: 2023/01/23 18:50:01 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clyde("Clyde");

	clyde.attack("Bonny");
	clyde.takeDamage(5);
	clyde.beRepaired(4);
}