/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:29:08 by masebast          #+#    #+#             */
/*   Updated: 2023/01/20 20:28:13 by masebast         ###   ########.fr       */
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
		bool operator==(const Point &p1) const;
		~Point(void);
		Fixed getX() const;
		Fixed getY() const;
	private:
		Fixed x;
		Fixed y;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);
std::ostream &operator<<(std::ostream &output, Fixed const &input);

#endif