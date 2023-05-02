/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 18:07:31 by masebast          #+#    #+#             */
/*   Updated: 2023/05/02 18:55:56 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <algorithm>
# include <chrono>
# include <list>
# include <vector>

// LIST
int fillList(std::list<int> *mergeTarget, char *argv[]);
int sortAndMergeList(std::list<int> *mergeTarget);
int printListResult(std::list<int> *mergeTarget);

// VECTOR
int fillVector(std::vector<int> *mergeTargetVector, char *argv[]);
int sortAndMergeVector(std::vector<int> *mergeTargetVector);
int printVectorResult(std::vector<int> *mergeTargetVector);

#endif