/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:50:57 by masebast          #+#    #+#             */
/*   Updated: 2023/01/31 21:31:23 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include "Animal.hpp"
# include <iostream>

class Animal {
	public:
		Animal(void);
		Animal(Animal const &src);
		Animal &operator=(Animal const &src);
		virtual ~Animal();
		virtual void makeSound(void) const = 0; // pure virtual
		std::string getType(void) const;
	protected:
		std::string _type;
};

#endif