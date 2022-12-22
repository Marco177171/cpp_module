#include <iostream>

int main(void)
{
	std::string str;
	std::string *stringPTR;
	std::string stringREF;

	str = "HI THIS IS BRAIN";
	stringPTR = &str;
	stringREF = str;
	std::cout << "String's address in memory: " << &str << std::endl;
	std::cout << "Address using stringPTR: " << stringPTR << std::endl;
	std::cout << "Address using stringREF: " << &stringREF << std::endl;
	std::cout << "Value of the string: " << str << std::endl;
	std::cout << "Display using pointer: " << *stringPTR << std::endl;
	std::cout << "Display using reference: " << stringREF << std::endl;
	return (0);
}
