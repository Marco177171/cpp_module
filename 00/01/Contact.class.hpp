/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 17:13:02 by masebast          #+#    #+#             */
/*   Updated: 2022/12/09 17:15:28 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
# include <iostream>
# include <string>

class Contact
{
	public:
		Contact(void);
		virtual ~Contact(void);
		Contact(Contact& next);
		Contact &operator=(Contact& next);
		bool insertInfo(int index);
		bool exists();
		std::string getPortion(int index);
		int getIndex(void);
		void clean_contacts(int index);
	private:
		static std::string _field_name[5];
		std::string _info[5];
		int _index;
		enum _Field
		{
			FirstName = 0,
			LastName,
			NickName,
			PhoneNumber,
			DarkestSecret
		};
};

bool isNumber(std::string s);

#endif

