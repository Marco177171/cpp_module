/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 21:58:22 by masebast          #+#    #+#             */
/*   Updated: 2023/02/06 15:22:47 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character(void);
		Character(Character const &source);
		Character(std::string type);
		Character &operator=(Character const &source);
		~Character(void);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		void dropMateria(AMateria *toDrop);
	private:
		AMateria *(inventory[4]);
		std::string _type;
		typedef struct drop{
			AMateria	*_content;
			drop		*_next;
		}	dropped;
		dropped	*_dropped;
};

#endif