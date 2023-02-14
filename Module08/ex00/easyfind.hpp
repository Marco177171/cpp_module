/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:49:45 by masebast          #+#    #+#             */
/*   Updated: 2023/02/14 13:25:08 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <algorithm>
# include <iterator>
# include <list>
# include <vector>

class ElementNotFound : public std::exception
{
	public:
		virtual const char *what() const throw()
		{
			return ("Element not found");
		}
};

template <typename T>
typename T::iterator easyfind(T intContainer, int occurrence)
{
	typename T::iterator iter;
	iter = std::find(intContainer.begin(), intContainer.end(), occurrence);
	if (iter == intContainer.end())
		throw ElementNotFound();
	return (iter);
};

#endif