/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 18:05:33 by masebast          #+#    #+#             */
/*   Updated: 2023/05/03 19:12:21 by masebast         ###   ########.fr       */
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

int main(int argc, char *argv[])
{
	std::deque<int> mergeTargetdeque;
	std::vector<int> mergeTargetVector;
	std::clock_t start1, end1, start2, end2;

	if (argc < 2)
		return (ft_error("ERROR: no arguments"));
	argv = &argv[1];
	if (ft_check(argv))
		return (ft_error("ERROR: all arguments must be positive integers"));
	// deque
	start1 = std::clock();
	fillDeque(&mergeTargetdeque, argv);
	sortAndMergeDeque(&mergeTargetdeque);
	printDequeResult(&mergeTargetdeque);
	end1 = std::clock();
	// VECTOR
	start2 = std::clock();
	fillVector(&mergeTargetVector, argv);
	sortAndMergeVector(&mergeTargetVector);
	printVectorResult(&mergeTargetVector);
	end2 = std::clock();
	std::cout << "Time to process a range of " << argc - 1 << " Elements with std::deque : " << static_cast<double>(end1 - start1) << std::endl;
	std::cout << "Time to process a range of " << argc - 1 << " Elements with std::vector : " << static_cast<double>(end2 - start2) << std::endl;
	return (0);
}