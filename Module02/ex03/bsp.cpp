/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:26:57 by masebast          #+#    #+#             */
/*   Updated: 2023/01/20 18:29:56 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	std::cout << a.getX().getRawBits() << std::endl;
	std::cout << b.getX().getRawBits() << std::endl;
	std::cout << c.getX().getRawBits() << std::endl;
	std::cout << point.getX().getRawBits() << std::endl;
	std::cout << "bsp called" << std::endl;
	return (true);
}