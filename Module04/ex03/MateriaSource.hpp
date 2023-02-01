/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 22:13:36 by masebast          #+#    #+#             */
/*   Updated: 2023/02/01 18:36:53 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include <iostream>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &source);
		MateriaSource(std::string const &type);
		MateriaSource &operator=(const MateriaSource &source);
		~MateriaSource(void);
		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);
	private:
		AMateria* _inventory[4];
};

#endif