/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:59:07 by masebast          #+#    #+#             */
/*   Updated: 2023/02/13 13:22:13 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <iostream>

template <typename T>
void swap(T &a, T &b) {
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
};

template <typename T>
T &min(T &a, T &b) {
	if (a > b)
		return (b);
	else
		return (a);
};

template <typename T>
T &max(T &a, T &b) {
	if (a < b)
		return (b);
	else
		return (a);
};

#endif