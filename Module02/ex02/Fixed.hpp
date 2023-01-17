/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:51:11 by masebast          #+#    #+#             */
/*   Updated: 2023/01/17 18:39:52 by masebast         ###   ########.fr       */
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
		~Fixed();
		
	private:
		int _fixedNumber;
		static const int _fractionalBitsValue = 8;
};

#endif