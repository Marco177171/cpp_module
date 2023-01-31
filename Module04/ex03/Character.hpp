/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 21:58:22 by masebast          #+#    #+#             */
/*   Updated: 2023/01/31 22:09:24 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include "ICharacter.hpp"

class Character
{
	public:
		Character(void);
		Character(const Character &source);
		Character(std::string const &type);
		~Character(void);
		Character &operator=(const Character &source);
	protected:
		//none
};

#endif