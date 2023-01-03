#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weap)
{
    this->_weap = &weap;
    this->_name = name;
    std::cout << "HumanA constructor called" << std::endl;
}

HumanA::~HumanA(void)
{
    std::cout << "HumanA destructor called" << std::endl;
}

std::string HumanA::getName(void) const
{
    return (this->_name);
}

void HumanA::attack(void) const
{
	std::cout << this->getName() << " attacks with their " << this->_weap->getType() << std::endl;
}
