/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:30:17 by masebast          #+#    #+#             */
/*   Updated: 2023/02/14 16:03:33 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <algorithm>
# include <vector>

class Span {
	public:
		Span(unsigned int max);
		Span(Span const &source);
		Span &operator=(Span const &source);
		~Span(void);
	private:
		Span(void);
		unsigned int _max;
		std::vector<int> _span;
		void addNumber(int number);
		unsigned int shortestSpan(void);
		unsigned int longestSpan(void);
		class emptySpan : public std::exception {
			public:
				virtual const char *what() throw()
				{
					return ("Span is empty");
				}
		};
		class oneInSpan : public std::exception {
			public:
				virtual const char *what() throw()
				{
					return ("Span only contains one value");
				}
		};
		class alreadyFilled : public std::exception {
			public:
				virtual const char *what() throw()
				{
					return ("Span is already filled");
				}
		};
};

#include "Span.tpp" 

#endif