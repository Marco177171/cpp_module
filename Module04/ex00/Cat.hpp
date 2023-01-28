/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:51:20 by masebast          #+#    #+#             */
/*   Updated: 2023/01/28 19:50:56 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat : public Animal {
	public:
		Cat(void);
		Cat(const Cat &src);
		Cat &operator=(const Cat &src);
		~Cat(void);
		void makeSound(void) const;
};

#endif