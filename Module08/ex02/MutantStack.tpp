/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:28:41 by masebast          #+#    #+#             */
/*   Updated: 2023/02/15 18:38:33 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack()
{}

template<typename T>
MutantStack<T>::MutantStack(MutantStack const &source)
{
	*this = source;
}

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack const &source)
{
	(void)source;
	return (*this);
}

template<typename T>
MutantStack<T>::~MutantStack(void)
{}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return (this->c.end());
}