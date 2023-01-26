/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:07:52 by masebast          #+#    #+#             */
/*   Updated: 2023/01/26 17:37:16 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const &source);
		FragTrap &operator=(FragTrap const &source);
		virtual ~FragTrap();
		void highFiveGuys(void);
	protected:
		void setHitPoints(int hitPoints);
		void setEnergy(int energy);
		void setAttack(int attackDamage);
		int getHitPoints(void);
		int getEnergy(void);
		int getAttack(void);
};

#endif