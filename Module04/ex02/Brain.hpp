/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:47:18 by masebast          #+#    #+#             */
/*   Updated: 2023/01/30 17:46:41 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include "iostream"

class Brain {
	public:
		Brain(void);
		Brain(Brain &source);
		Brain &operator=(Brain &source);
		virtual ~Brain(void);
		std::string getIdea(int index);
		void setIdea(std::string idea, int index);
	private:
		std::string _ideas[100];
};

#endif