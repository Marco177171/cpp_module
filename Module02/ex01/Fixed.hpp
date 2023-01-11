/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:36:03 by masebast          #+#    #+#             */
/*   Updated: 2023/01/11 17:49:30 by masebast         ###   ########.fr       */
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
		Fixed &operator=(const Fixed &source);
		~Fixed();
		float toFloat(void) const;
		int toInt(void) const;
	private:
		int _fixedPointNumberValue;
		static const int _fractionalBitsValue = 8;
};

std::ostream &operator<<(std::ostream &output, Fixed const &input);

#endif