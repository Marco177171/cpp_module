/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:50:52 by masebast          #+#    #+#             */
/*   Updated: 2023/02/13 15:43:29 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template <typename T>
class Array {
	public:
		Array(void);
		Array(unsigned int n);
		Array(Array const &source);
		~Array(void) {};
		&operator=(Array const &source);
		&operator[]();
		int size();
	private:
		T *_array = new[n] Array;
};

#include "Array.tpp"

#endif