/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:02:47 by masebast          #+#    #+#             */
/*   Updated: 2023/02/11 17:03:11 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(void)
{
	std::srand(std::time(NULL));
	Base *toIdentify;

	toIdentify = generate();
	identify(toIdentify);
	identify(*toIdentify);
	delete toIdentify;
	return (0);
}