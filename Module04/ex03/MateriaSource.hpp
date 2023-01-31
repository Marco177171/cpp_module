/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 22:13:36 by masebast          #+#    #+#             */
/*   Updated: 2023/01/31 22:14:06 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include <iostream>
# include "AMateria.hpp"

class MateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &source);
		MateriaSource(std::string const &type);
		~MateriaSource(void);
		MateriaSource &operator=(const MateriaSource &source);
	protected:
		//none
};

#endif