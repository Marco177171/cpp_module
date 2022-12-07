/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:36:00 by masebast          #+#    #+#             */
/*   Updated: 2022/12/07 19:30:10 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// namespace birillo
// {
//     printf();
//     std::string ft_answer()
//     {
//         printf("");
//     }
// }

// namespace palla
// {
//     printf();
// }

// palla::printf()

// std::cout << "ciao" << std::endl;

int main(int argc, char *argv[])
{
	int index;
	char *str;

	index = -1;
	str = argv[1];
	if (argc >= 2)
	{
		while (str[++index])
			toupper(str[index]);
		std::cout << str << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
