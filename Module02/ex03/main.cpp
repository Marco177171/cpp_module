/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:26:54 by masebast          #+#    #+#             */
/*   Updated: 2023/01/20 18:48:04 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

int main(void)
{
	Point t_point[3];
	Point point;
	float x;
	float y;
	int index;

	index = 0;
	while (index < 3)
	{
		std::cout << "NEW POINT " << index << ": " << std::endl;
		std::cout << index << "x: ";
		std::cin >> x;
		std::cout << index << "y: ";
		std::cin >> y;
		t_point[index] = Point(x, y);
		std::cout << "Point created." << std::endl;
		index++;
	}
	std::cout << "POINT TO CHECK" << std::endl;
	std::cout << "x: ";
	std::cin >> x;
	std::cout << "y: ";
	std::cin >> y;
	point = Point(x, y);
	std::cout << "Point created." << std::endl;
	std::cout << "Intersection: " << std::endl;
	if (bsp(t_point[0], t_point[1], t_point[2], point) == true)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
	return (0);
}