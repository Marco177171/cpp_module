/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 18:20:17 by masebast          #+#    #+#             */
/*   Updated: 2023/01/31 18:35:26 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP
# include <iostream>

class WrongAnimal {
	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const &src);
		WrongAnimal &operator=(WrongAnimal const &src);
		virtual ~WrongAnimal();
		virtual void makeSound(void) const;
		std::string getType(void) const;
	protected:
		std::string _type;
};

#endif