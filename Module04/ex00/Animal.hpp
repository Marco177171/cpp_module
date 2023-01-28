/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:50:57 by masebast          #+#    #+#             */
/*   Updated: 2023/01/28 18:38:53 by masebast         ###   ########.fr       */
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
		~Animal();
	protected:
		std::string _type;
};

#endif