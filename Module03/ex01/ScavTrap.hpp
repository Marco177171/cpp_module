/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:48:14 by masebast          #+#    #+#             */
/*   Updated: 2023/01/24 18:19:27 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap : public ClapTrap {
	public:
		ScavTrap(void);
		ScavTrap( std::string const name);
		ScavTrap(ScavTrap const &source);
		ScavTrap &operator=(ScavTrap const &source);
		~ScavTrap();
		void guardGate();
};

#endif