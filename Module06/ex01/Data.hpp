/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:01:11 by masebast          #+#    #+#             */
/*   Updated: 2023/02/11 12:37:55 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP
# include <iostream>
# include <cstdint>

class Data {
	public:
		Data(void);
		Data(Data const &source);
		Data &operator=(Data const &source);
		Data(int n);
		~Data(void);
		int getValue(void);
	private:
		int _value;
};

uintptr_t serialize(Data *ptr);
Data *deserialize(uintptr_t raw);

#endif