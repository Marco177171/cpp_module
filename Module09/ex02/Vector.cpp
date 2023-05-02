/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:05:11 by masebast          #+#    #+#             */
/*   Updated: 2023/05/02 19:20:15 by masebast         ###   ########.fr       */
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

int sortAndMergeVector(std::vector<int> *mergeTargetVector)
{
	(void)mergeTargetVector;
	std::cout << "sorting vector" << std::endl;
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