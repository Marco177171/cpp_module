#include "Zombie.hpp"

Zombie::Zombie(std::string s)
{
	this->_name = name;
	std::cout << "Constructor called a zombie: " << s << std::endl;
}

Zombie::Zombie(void)
{
	this->_name = "A zombie without a name";
	std::cout << "Constructor called on zombie" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " has been detroyed" << std::endl;
}

std::string Zombie::getName(void) const
{
	return (this->_name);
}

void Zombie::setName(std::string name)
{
	this->_name = _name;
}
