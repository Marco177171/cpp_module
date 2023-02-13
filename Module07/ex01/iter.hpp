/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:24:39 by masebast          #+#    #+#             */
/*   Updated: 2023/02/13 13:47:48 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template <typename T>
void iter (T *array, size_t length, void (*func)(T&)) {
	size_t index;

	index = 0;
	while (index < length)
	{
		func(array[index]);
		index++;
	}
};

template <typename T>
void print (T &toPrint)
{
	std::cout << toPrint << std::endl;
}

#endif