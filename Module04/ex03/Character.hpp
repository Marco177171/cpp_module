/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 21:58:22 by masebast          #+#    #+#             */
/*   Updated: 2023/02/03 18:09:03 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include "ICharacter.hpp"

class droppedMateria {
	public:
		droppedMateria(void) {};
		~droppedMateria(void) {};
		AMateria *_content;
		droppedMateria *_head;
		droppedMateria *_next;
};

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
		droppedMateria *_dropped;
		std::string _type;
};

#endif