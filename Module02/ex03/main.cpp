/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:26:54 by masebast          #+#    #+#             */
/*   Updated: 2023/01/19 17:48:17 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

int main(void)
{
	Point *t_point[3];
	Point point;
	float x;
	float y;
	int index;

	index = 0;
	while (index < 3)
	{
		std::cout << "NEW POINT " << index << ": " << std::endl;
		std::cout <<  index << "x: " << std::endl;
		std::cin >> x;
		std::cout <<  index << "y: " << std::endl;
		std::cin >> y;
		t_point[index] = new Point(x, y);
		std::cout << "Point created." << std::endl;
		index++;
	}
	index = 0;
	while (index < 3)
		delete (t_point[index++]);
	return (0);
}