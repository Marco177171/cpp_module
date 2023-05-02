/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   List.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:04:50 by masebast          #+#    #+#             */
/*   Updated: 2023/05/02 18:43:33 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int fillList(std::list<int> *mergeTarget, char *argv[])
{
	int index;

	index = 0;
	std::cout << "Before: ";
	while (argv[index])
	{
		std::cout << argv[index] << " ";
		mergeTarget->push_back(std::atoi(argv[index]));
		index++;
	}
	std::cout << std::endl;
	return (0);
}

int sortAndMergeList(std::list<int> *mergeTarget)
{
	mergeTarget->sort();
	mergeTarget->unique();
	return (0);
}

int printListResult(std::list<int> *mergeTarget)
{
	std::list<int>::iterator iter;

	iter = mergeTarget->begin();
	std::cout << "After (list) : ";
	while (iter != mergeTarget->end())
	{
		std::cout << *iter << " ";
		iter++;
	}
	std::cout << std::endl;
	return (0);
}