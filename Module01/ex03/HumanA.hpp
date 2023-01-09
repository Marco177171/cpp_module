/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:57:39 by masebast          #+#    #+#             */
/*   Updated: 2023/01/09 16:57:40 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"
# include <iostream>

class HumanA
{
	private:
		Weapon* _weap;
		std::string _name;
	public:
		HumanA(std::string name, Weapon& weap);
		~HumanA();
		std::string getName() const;
		void attack() const;
};

#endif
