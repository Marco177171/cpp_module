/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:50:46 by masebast          #+#    #+#             */
/*   Updated: 2023/02/13 16:41:59 by masebast         ###   ########.fr       */
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
	std::cout << "Destructor constructor called" << std::endl;
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &source)
{
	int index;

	index = -1;
	while (source[index])
		this->_array[index] = source._array[index];
	std::cout << "Operator overload constructor called" << std::endl;
	return (*this);
}

template <typename T>
T &Array<T>::operator[](int n)
{
	try
	{

	}
	throw ();
	std::cout << "[] operator overflow called" << std::endl;
}

template <typename T>
int Array<T>::size(void)
{
	int index;

	index = 0;
	while (this->_array[index])
		index++;
	return (index);
}