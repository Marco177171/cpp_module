/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:29:08 by masebast          #+#    #+#             */
/*   Updated: 2023/01/19 15:42:02 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include <iostream>
# include "Fixed.hpp"

class Point {
	public:
		Point(void);
		Point(Fixed x, Fixed y);
		Point(const float x, const float y);
		Point(const Point &source);
		Point &operator=(const Point &source);
		~Point(void);
	private:
		Fixed x;
		Fixed y;
};

std::ostream &operator<<(std::ostream &output, Fixed const &input);
std::istream &operator>>(std::istream &input, Fixed const &output);

#endif