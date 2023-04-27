/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 12:10:30 by masebast          #+#    #+#             */
/*   Updated: 2023/04/27 17:36:36 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BTC_HPP
# define BTC_HPP

#include <iostream>
#include <fstream>
#include <algorithm>
#include <map>

class btc {
	public:
		btc(void);
		btc(const btc &src);
		// btc &operator=(const btc &src);
		~btc();
		std::multimap<std::string, std::string> map_data;
	protected:
};

#endif