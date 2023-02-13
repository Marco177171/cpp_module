/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:50:46 by masebast          #+#    #+#             */
/*   Updated: 2023/02/13 17:50:39 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(void) : _array(NULL)
{
	std::cout << "Default constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n])
{
	std::cout << "Size constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(Array const &source) : _array(new T[source.size()])
{
	std::cout << "Copy constructor called" << std::endl;
}

template <typename T>
Array<T>::~Array(void)
{
	if (this->_array)
		delete[] this->_array;
	std::cout << "Destructor called" << std::endl;
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &source)
{
	int index;

	index = -1;
	while (source._array[index])
		this->_array[index] = source._array[index];
	std::cout << "Operator overload constructor called" << std::endl;
	return (*this);
}

template <typename T>
T &Array<T>::operator[](int n)
{
	int index;

	index = 0;
	std::cout << "[] operator overflow called" << std::endl;
	try
	{
		while (this->_array[index])
			index++;
		this->_array[index] = n;
	}
	catch (const IndexOut &e) {};
	return (this->_array[index]);
}

template <typename T>
int Array<T>::size(void) const
{
	int index;

	index = 0;
	while (this->_array[index])
		index++;
	return (index);
}