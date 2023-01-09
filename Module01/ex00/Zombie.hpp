/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:57:10 by masebast          #+#    #+#             */
/*   Updated: 2023/01/09 16:57:12 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie(std::string s);
		Zombie();
		~Zombie();
		void announce(void) const;
		std::string getName(void) const;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif
