#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"
# include <iostream>

class HumanA
{
	private:
		Weapon* _weap;
		std::string _name;
	public:
		HumanA(std::string name, Weapon& weap);
		~HumanA();
		std::string getName() const;
		void attack() const;
};

#endif
