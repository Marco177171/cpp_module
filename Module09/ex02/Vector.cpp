/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:05:11 by masebast          #+#    #+#             */
/*   Updated: 2023/05/04 12:32:42 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int fillVector(std::vector<int> *mergeTargetVector, char *argv[])
{
	int index;

	index = 0;
	while (argv[index])
	{
		mergeTargetVector->push_back(std::atoi(argv[index]));
		index++;
	}
	return (0);
}

int insertionSortVector(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	std::vector<int>::iterator i;
	std::vector<int>::iterator j;
	
	i = begin;
	while (i != end)
	{
		j = i;
		while (j != begin && *j < *(std::prev(j)))
		{
			std::iter_swap(j, std::prev(j));
			j--;
		}
		i++;
	}
	return (0);
}

int mergeInsertSortVector(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	std::vector<int>::iterator middle;

	if (std::distance(begin, end) <= 10)
		insertionSortVector(begin, end);
	else
	{
		middle = begin;
		std::advance(middle, std::distance(begin, end) / 2);
		mergeInsertSortVector(begin, middle);
		mergeInsertSortVector(middle, end);
		std::inplace_merge(begin, middle, end);
	}
	return (0);
}

int printVectorResult(std::vector<int> *mergeTargetVector)
{
	std::vector<int>::iterator iter;

	iter = mergeTargetVector->begin();
	std::cout << "After (vector) : ";
	while (iter != mergeTargetVector->end())
	{
		std::cout << *iter << " ";
		iter++;
	}
	std::cout << std::endl;
	return (0);
}