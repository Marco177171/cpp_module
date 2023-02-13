/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:50:52 by masebast          #+#    #+#             */
/*   Updated: 2023/02/13 16:38:50 by masebast         ###   ########.fr       */
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
		~Array(void);
		Array &operator=(Array const &source);
		T &operator[](int n);
		int size(void);
		class IndexOut : public std::exception {
			public:
				virtual const char * what() const throw()
				{
					return ("Index out of bound");
				}
		}
	private:
		T *_array;
};

#include "Array.tpp"

#endif