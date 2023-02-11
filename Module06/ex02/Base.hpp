/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:02:52 by masebast          #+#    #+#             */
/*   Updated: 2023/02/11 16:38:11 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ID_HPP
# define ID_HPP
# include <iostream>
# include <cstdlib>
# include <cstdint>

class Base {
	public:
		virtual ~Base();
};

class A : public Base {
};

class B : public Base {
};

class C : public Base {
};

Base *generate(void);
void identify(Base *p); // prints the actual type of the object
void identify(Base &p); // prints the actual type of the object

#endif