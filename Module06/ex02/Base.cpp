/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:08:54 by masebast          #+#    #+#             */
/*   Updated: 2023/02/11 17:04:40 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base()
{
	std::cout << "Base destructor called" << std::endl;
}

Base *generate(void)
{
	Base *result;

	switch (std::rand() % 3)
	{
		case 0:
		{
			result = new A;
			break ;
		}
		case 1:
		{
			result = new B;
			break ;
		}
		case 2:
		{
			result = new C;
			break ;
		}
	}
	return (result);
}

void identify(Base *p)
{
	std::cout << "-- POINTER PARAMETER --" << std::endl;
	std::cout << "pointer: " << p << std::endl;
	if (dynamic_cast<A*>(p))
		std::cout << "real type: A" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "real type: B" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "real type: C" << std::endl;
}

void identify(Base &p)
{
	A a;
	B b;
	C c;

	std::cout << "-- REFERENCE PARAMETER --" << std::endl;
	std::cout << "pointer: " << &p << std::endl;
	try
	{
		a = dynamic_cast<A&>(p);
		std::cout << "real type: A" << std::endl;
	}
	catch(const std::bad_cast &e) {}
	try
	{
		b = dynamic_cast<B&>(p);
		std::cout << "real type: B" << std::endl;
	}
	catch(const std::bad_cast &e) {}
	try
	{
		c = dynamic_cast<C&>(p);
		std::cout << "real type: C" << std::endl;
	}
	catch(const std::bad_cast &e) {}
}