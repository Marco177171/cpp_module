/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 18:05:33 by masebast          #+#    #+#             */
/*   Updated: 2023/05/02 15:45:23 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int ft_error(std::string str)
{
	std::cerr << str << std::endl;
	return (1);
}

int ft_check(char *argv[])
{
	int i, j;

	i = 0;
	while (argv[i])
	{
		if (std::atoi(argv[i]) < 0)
			return (1);
		j = 0;
		while (argv[i][j])
		{
			if (!std::isdigit(argv[i][j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int fillList(std::list<int> *mergeTarget, char *argv[])
{
	int index;

	index = 0;
	std::cout << "Before: " << std::endl;
	while (argv[index])
	{
		std::cout << argv[index] << std::endl;
		mergeTarget->push_back(std::atoi(argv[index]));
		index++;
	}
	return (0);
}

int sortAndMerge(std::list<int> *mergeTarget)
{
	mergeTarget->sort();
	mergeTarget->unique();
	return (0);
}

int printResult(std::list<int> *mergeTarget)
{
	std::list<int>::iterator iter;

	iter = mergeTarget->begin();
	std::cout << "After: " << std::endl;
	while (iter != mergeTarget->end())
	{
		std::cout << *iter << std::endl;
		iter++;
	}
	return (0);
}

int main(int argc, char *argv[])
{
	std::list<int> mergeTarget;

	if (argc < 2)
		return (ft_error("ERROR: no arguments"));
	argv = &argv[1];
	if (ft_check(argv))
		return (ft_error("ERROR: all arguments must be positive integers"));
	fillList(&mergeTarget, argv);
	sortAndMerge(&mergeTarget);
	printResult(&mergeTarget);
	return (0);
}