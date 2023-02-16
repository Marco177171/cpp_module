/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:57:31 by masebast          #+#    #+#             */
/*   Updated: 2023/02/16 09:33:01 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str;
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	str = "HI THIS IS BRAIN";
	std::cout << "String's address in memory: " << &str << std::endl;
	std::cout << "Address using stringPTR: " << stringPTR << std::endl;
	std::cout << "Address using stringREF: " << &stringREF << std::endl;
	std::cout << "Value of the string: " << str << std::endl;
	std::cout << "Display using pointer: " << *stringPTR << std::endl;
	std::cout << "Display using reference: " << stringREF << std::endl;
	return (0);
}
