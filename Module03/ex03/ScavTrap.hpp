/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:48:14 by masebast          #+#    #+#             */
/*   Updated: 2023/01/28 16:50:44 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	public:
		ScavTrap(void);
		ScavTrap(std::string const name);
		ScavTrap(ScavTrap const &source);
		ScavTrap &operator=(ScavTrap const &source);
		virtual ~ScavTrap();
		void guardGate();
	protected:
		void setHitPoints(int hitPoints);
		void setEnergy(int energy);
		void setAttack(int attack);
		int getHitPoints(void);
		int getEnergy(void);
		int getAttack(void);
};

#endif