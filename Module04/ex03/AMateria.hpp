/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 19:13:40 by masebast          #+#    #+#             */
/*   Updated: 2023/02/03 18:24:13 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	public:
		AMateria(void);
		AMateria(const AMateria &source);
		AMateria(std::string const &type);
		AMateria &operator=(const AMateria &source);
		virtual ~AMateria(void);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter &target);
	protected:
		std::string _type;
};

std::string	convertToTypeStr(std::string s);

#endif