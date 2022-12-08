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
	int arg_index;
	int str_index;
	char *str;

	arg_index = 0;
	if (argv[1])
	{
		while (argv[++arg_index])
		{
			str = argv[arg_index];
			str_index = -1;
			while (str[++str_index])
			{
				if (str[str_index] >= 97 && str[str_index] <= 122)
					str[str_index] -= 32;
			}
			std::cout << str;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}

