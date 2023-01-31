/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 21:57:46 by masebast          #+#    #+#             */
/*   Updated: 2023/01/31 22:06:40 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include <iostream>
# include "IMateriaSource.hpp"

class Cure
{
	public:
		Cure(void);
		Cure(const Cure &source);
		Cure(std::string const &type);
		~Cure(void);
		Cure &operator=(const Cure &source);
	private:
		std::string _type;
};

#endif