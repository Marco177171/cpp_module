/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:36:03 by masebast          #+#    #+#             */
/*   Updated: 2023/01/17 17:43:15 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed {
	public:
		Fixed();
		Fixed(const int intParameter);
		Fixed(const float floatParameter);
		Fixed(Fixed const &source);
		Fixed &operator=(Fixed const &source);
		~Fixed();
		int toInt(void) const;
		float toFloat(void) const;
	private:
		int _fixedPoint;
		static const int _fractionalBitsValue = 8;
};

std::ostream &operator<<(std::ostream &output, Fixed const &input);

#endif