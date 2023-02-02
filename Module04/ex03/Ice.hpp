/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 21:57:52 by masebast          #+#    #+#             */
/*   Updated: 2023/02/02 21:32:59 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(const Ice &source);
		Ice &operator=(const Ice &source);
		~Ice(void);
		void use(ICharacter &target);
		AMateria* clone(void) const;
};

std::string convertToTypeStr(std::string s);

#endif