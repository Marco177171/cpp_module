#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie(std::string s);
		Zombie();
		~Zombie();
		void announce(void) const;
		std::string getName(void) const;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif
