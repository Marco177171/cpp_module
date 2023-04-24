#include "btc.hpp"

btc::btc(void)
{
	std::cout << "btc default construcotr called" << std::endl;
}

btc::btc(const btc &src)
{
	*this = src;	
	std::cout << "btc reference constructor called" << std::endl;
}

btc &btc::operator=(const btc &src)
{
	*this = src;
	std::cout << "btc overload constructor called" << std::endl;
	return (*this);
}

btc::~btc()
{
	std::cout << "btc destructor called" << std::endl;
}