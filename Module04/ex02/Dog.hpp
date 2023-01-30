/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:51:35 by masebast          #+#    #+#             */
/*   Updated: 2023/01/30 16:42:15 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
	public:
		Dog(void);
		Dog(const Dog &src);
		Dog &operator=(const Dog &src);
		virtual ~Dog(void);
		void makeSound(void) const;
	private:
		Brain* _brain;
};

#endif