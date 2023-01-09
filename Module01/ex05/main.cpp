#include "Karen.hpp"

int ft_error(std::string error)
{
	std::cout << error << std::endl;
	return (1);
}

int main(int argc, char *argv[])
{
	std::string level;

	if (argc != 2)
		return (ft_error("argument error. Appropriate syntax: ./Karen [level]"));
	level = argv[1];
	if (level != "debug" && level != "info" && level != "warning" && level != "error")
		return (ft_error("possible arguments: debug, info, warning, error"));
	Karen *karen;
	karen::Karen();
	karen->complain(level);
	karen::~Karen();
	return (0);
}