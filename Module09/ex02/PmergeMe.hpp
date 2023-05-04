/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 18:07:31 by masebast          #+#    #+#             */
/*   Updated: 2023/05/04 12:33:05 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <algorithm>
# include <chrono>
# include <deque>
# include <vector>

// LIST
int fillDeque(std::deque<int> *mergeTarget, char *argv[]);
int mergeInsertSortDeque(std::deque<int>::iterator begin, std::deque<int>::iterator end);
int printDequeResult(std::deque<int> *mergeTarget);

// VECTOR
int fillVector(std::vector<int> *mergeTargetVector, char *argv[]);
int mergeInsertSortVector(std::vector<int>::iterator begin, std::vector<int>::iterator end);
int printVectorResult(std::vector<int> *mergeTargetVector);

#endif