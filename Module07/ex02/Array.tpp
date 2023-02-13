/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:50:46 by masebast          #+#    #+#             */
/*   Updated: 2023/02/13 15:42:36 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(void)
{}

template <typename T>
Array<T>::Array(unsigned int n)
{}

template <typename T>
Array<T>::Array(Array const &source)
{}

template <typename T>
Array<T>::~Array(void)
{}

template <typename T>
Array<T> &Array<T>::operator=(Array const &source)
{}

template <typename T>
Array<T> &Array<T>::operator[]()
{}

template <typename T>
int Array<T>::size()
{}