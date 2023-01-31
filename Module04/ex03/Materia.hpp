/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 21:57:58 by masebast          #+#    #+#             */
/*   Updated: 2023/01/31 22:14:53 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_HPP
# define MATERIA_HPP
# include <iostream>
# include "AMateria.hpp"
# include "MateriaSource.hpp"

class Materia
{
	public:
		Materia(void);
		Materia(const Materia &source);
		Materia(std::string const &type);
		~Materia(void);
		Materia &operator=(const Materia &source);
	protected:
		//none
};

#endif