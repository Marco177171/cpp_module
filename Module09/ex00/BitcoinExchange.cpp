/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 12:10:27 by masebast          #+#    #+#             */
/*   Updated: 2023/04/26 14:56:33 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

btc::btc(void)
{
	std::cout << "btc default construcotr called" << std::endl;
}

btc::btc(const btc &src)
{
	*this = src;
	std::cout << "btc reference constructor called" << std::endl;
}

// btc &btc::operator=(const btc &src)
// {
// 	std::cout << "btc overload constructor called" << std::endl;
// 	return (*this);
// }

btc::~btc()
{
	std::cout << "btc destructor called" << std::endl;
}