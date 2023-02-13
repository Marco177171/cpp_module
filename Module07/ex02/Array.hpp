/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:50:52 by masebast          #+#    #+#             */
/*   Updated: 2023/02/13 15:22:40 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
class Array {
	public:
		Array(void) : _array = NULL {};
		Array(unsigned int n)
		{
			int index;

			index = -1;
			while (++index < n)
				this->_array[index] = new Array;
		};
		Array(Array const &source) : _array(source._array)
		{};
		~Array(void) {};
		&operator=(Array const &source)
		{
			this = source;
			return (*this);
		};
		&operator[]();
		int size()
		{
			int index;

			index = 0;
			while (this->_array[index])
				index++;
			return (index);
		};
	private:
		T *_array = new[n] Array;
};