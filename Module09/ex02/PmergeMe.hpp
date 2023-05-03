/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 18:07:31 by masebast          #+#    #+#             */
/*   Updated: 2023/05/03 19:11:21 by masebast         ###   ########.fr       */
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
int sortAndMergeDeque(std::deque<int> *mergeTarget);
int printDequeResult(std::deque<int> *mergeTarget);

// VECTOR
int fillVector(std::vector<int> *mergeTargetVector, char *argv[]);
int sortAndMergeVector(std::vector<int> *mergeTargetVector);
int printVectorResult(std::vector<int> *mergeTargetVector);

#endif