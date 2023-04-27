/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 12:10:27 by masebast          #+#    #+#             */
/*   Updated: 2023/04/27 14:42:15 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

btc::btc(void)
{}

btc::btc(const btc &src)
{
	*this = src;
}

// btc &btc::operator=(const btc &src)
// {
// 	std::cout << "btc overload constructor called" << std::endl;
// 	return (*this);
// }

btc::~btc()
{}