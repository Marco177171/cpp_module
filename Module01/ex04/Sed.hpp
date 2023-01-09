/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:58:05 by masebast          #+#    #+#             */
/*   Updated: 2023/01/09 16:58:05 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP
# include <string>
# include <fstream>
# include <iostream>
# include <sstream>

class Sed
{
	private:
		std::string _file;
		std::string _s1;
		std::string _s2;
		std::string replaceAndReturn(std::string line);
	public:
		Sed(std::string file, std::string s1, std::string s2);
		~Sed(void);
		void openStreams(void);
		std::string getFile(void) const;
		std::string getSearch(void) const;
		std::string getReplace(void) const;
};

#endif