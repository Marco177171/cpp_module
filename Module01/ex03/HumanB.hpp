# ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"
# include <iostream>

class HumanB 
{
	private:
		Weapon* _weap;
		std::string _name;
	public:
		HumanB(std::string name);
		~HumanB();
		std::string getName() const;
		void attack() const;
		void setWeapon(Weapon& weap);
};

#endif