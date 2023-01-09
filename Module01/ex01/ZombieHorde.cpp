/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:57:24 by masebast          #+#    #+#             */
/*   Updated: 2023/01/09 16:57:27 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *arr;
	int i;

	arr = new Zombie[N];
	i = 0;
	while (i < N)
		arr[i++].setName(name);
	std::cout << "zombieHorde function finished" << std::endl;
	return (arr);
}
