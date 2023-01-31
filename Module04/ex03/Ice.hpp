/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 21:57:52 by masebast          #+#    #+#             */
/*   Updated: 2023/01/31 22:06:37 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include <iostream>
# include "IMateriaSource.hpp"

class Ice
{
	public:
		Ice(void);
		Ice(const Ice &source);
		Ice(std::string const &type);
		~Ice(void);
		Ice &operator=(const Ice &source);
	private:
		std::string _type;
};

#endif