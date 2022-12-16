/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:55:03 by masebast          #+#    #+#             */
/*   Updated: 2022/12/09 17:23:51 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include "Phonebook.class.hpp"

void list_commands()
{
	st::cout << "Is there a typo? Pay attention to spaces and non-printable characters" << endl
	st::cout << "COMMANDS:" << endl
	st::cout << "ADD: add a contact to phonebook" << endl
	st::cout << "SEARCH: search for a contact in the phonebook" << endl
	st::cout << "EXIT: quit the program" << endl
}

int main()
{
	std::string cmd;
	Phonebook phone_book;

	while (1)
	{
		std::cout << "phonebook: ";
		std::getline(std::cin, cmd);
		if (!cmd.compare("ADD\0"))
			phone_book.add_contact();
		else if (!cmd.compare("SEARCH\0"))
			phone_book.display();
		else if (!cmd.compare("EXIT\0"))
			break ;
		else
			list_commands();
	}
	return (0);
}
