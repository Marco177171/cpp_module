/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:28:36 by masebast          #+#    #+#             */
/*   Updated: 2023/02/15 18:13:55 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack<T>();
		MutantStack<T>(MutantStack const &source);
		MutantStack &operator=(MutantStack const &source);
		~MutantStack(void);
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin();
		iterator end();
};

#include "MutantStack.tpp"

#endif