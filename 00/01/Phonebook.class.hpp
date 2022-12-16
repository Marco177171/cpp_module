/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 17:12:50 by masebast          #+#    #+#             */
/*   Updated: 2022/12/09 17:12:50 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
# include "Contact.class.hpp"
# include <iostream>

class Phonebook
{
	private:
		Contact	_contacts[8];
		int		_older;
	public:
		Phonebook(void);
		virtual Phonebook(void);
		Phonebook(Phonebook& next);
		Phonebook& operator=(Phonebook& next);
		void add_contact(void);
		void display(void);
};

#endif

