#include "Zombie.hpp"

Zombie::Zombie(std::string s)
{
	this->_name = s;
	std::cout << "Constructor called on zombie " << s << std::endl;
}

Zombie::Zombie(void)
{
	this->_name = "a zombie without a name";
	std::cout << "Constructor called " << this->_name << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " has been destroyed" << std::endl;
}

std::string Zombie::getName(void) const
{
	return (this->_name);
}

void Zombie::announce(void) const
{
	std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

