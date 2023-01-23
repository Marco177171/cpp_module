/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:26:57 by masebast          #+#    #+#             */
/*   Updated: 2023/01/23 17:15:18 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

float area(Point const p1, Point const p2, Point const p3)
{
	return (abs(p1.getX().toFloat() * (p2.getY().toFloat() - p3.getY().toFloat())
		+ p2.getX().toFloat() * (p3.getY().toFloat() - p1.getY().toFloat())
		+ p3.getX().toFloat() * (p1.getY().toFloat() - p2.getY().toFloat()) / 2));
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float total;
	float ar = area(a, b, c);
	float ar_1 = area(point, b, c);
	float ar_2 = area(a, point, c);
	float ar_3 = area(a, b, point);

	if (point == a || point == b || point == c)
		return (false);
	total = ar_1 + ar_2 + ar_3;
		return (ar == total);
	return (true);
}