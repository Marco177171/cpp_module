/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:43:59 by masebast          #+#    #+#             */
/*   Updated: 2023/01/10 19:36:04 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed {
	public:
		Fixed(void);
		Fixed(Fixed &fixed);
		Fixed &operator=(const Fixed &source);
		~Fixed(void);
		int getRawBits(void) const;
		void setRawBits(int const raw);
	private:
		int _fixedPointNumberValue;
		static const int _fractionalBitsAmount = 8;
};

std::ostream &operator<<(std::ostream &output, Fixed const &input);

#endif