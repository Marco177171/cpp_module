/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:51:20 by masebast          #+#    #+#             */
/*   Updated: 2023/01/30 16:41:32 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
	public:
		Cat(void);
		Cat(const Cat &src);
		Cat &operator=(const Cat &src);
		virtual ~Cat(void);
		void makeSound(void) const;
	private:
		Brain* _brain;
};

#endif