/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:57:45 by masebast          #+#    #+#             */
/*   Updated: 2023/01/09 16:57:45 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"
# include <iostream>

class HumanB 
{
	private:
		Weapon* _weap;
		std::string _name;
	public:
		HumanB(std::string name);
		~HumanB();
		std::string getName() const;
		void attack() const;
		void setWeapon(Weapon& weap);
};

#endif