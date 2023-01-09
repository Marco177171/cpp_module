#include "Harl.hpp"

int ft_error(std::string error)
{
	std::cout << error << std::endl;
	return (1);
}

void HarlFilter(std::string level, Harl *harl)
{
	switch (level)
	{
		case (level == "debug"):
			harl.complain(level);
			break;
		default:
			std::cout << "Probably complaining about insignificant problems" << std::endl;
			break;
	}
}

int main(int argc, char *argv[])
{
	std::string level;
	Harl *harl = new Harl();

	if (argc != 2)
		return (ft_error("Error: arguments must be exactly two"));
	level = argv[1];
	HarlFilter(level, harl);
	delete harl;
	return (0);
}