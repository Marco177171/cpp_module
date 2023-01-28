/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 17:21:41 by masebast          #+#    #+#             */
/*   Updated: 2023/01/28 17:27:57 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap {
	public:
		ClapTrap(void);
		ClapTrap(std::string const name);
		ClapTrap(ClapTrap const &source);
		ClapTrap &operator=(ClapTrap const &source);
		virtual ~ClapTrap(void);
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	protected:
		std::string _name;
		int _hitPoints;
		int _energy;
		int _attackDamage;
		void setName(std::string name);
		std::string getName(void);
};

#endif