/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:51:11 by masebast          #+#    #+#             */
/*   Updated: 2023/01/18 17:23:58 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed {
	public:
		Fixed();
		Fixed(int integer);
		Fixed(float floating);
		Fixed(Fixed const &source);
		Fixed &operator=(Fixed const &source);
		~Fixed();
		bool operator>(Fixed const &other) const;
		bool operator<(Fixed const &other) const;
		bool operator>=(Fixed const &other) const;
		bool operator<=(Fixed const &other) const;
		bool operator==(Fixed const &other) const;
		bool operator!=(Fixed const &other) const;
		Fixed operator+(Fixed const &operand);
		Fixed operator-(Fixed const &operand);
		Fixed operator*(Fixed const &operand);
		Fixed operator/(Fixed const &operand);
		Fixed operator++(void);
		Fixed operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		static Fixed &min(Fixed &f1, Fixed &f2);
		static Fixed const &min(Fixed const &f1, Fixed const &f2);
		static Fixed &max(Fixed &f1, Fixed &f2);
		static Fixed const &max(Fixed const &f1, Fixed const &f2);
	private:
		int _fixedNumber;
		static const int _fractionalBitsValue = 8;
};

std::ostream &operator<<(std::ostream &output, Fixed const &input);

#endif