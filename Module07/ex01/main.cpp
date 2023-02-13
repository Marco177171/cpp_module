/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:24:33 by masebast          #+#    #+#             */
/*   Updated: 2023/02/13 13:47:00 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	int length = 5;
	int arrInt[] = {1, 2, 3, 4, 5};
	double arrDouble[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	float arrFloat[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};

	iter (arrInt, length, &print);
	iter (arrDouble, length, &print);
	iter (arrFloat, length, &print);

	return (0);
}