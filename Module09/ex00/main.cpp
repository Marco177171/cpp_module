#include "BitcoinExchange.hpp"

int ft_error(std::string error)
{
	std::cerr << error << std::endl;
	return (1);
}

int main(int argc, char *argv[])
{
	FILE *file;

	if (argc != 2 || strcmp(argv[1], "data.csv"))
		return (ft_error("error: arguments"));
	file = argv[1].open;
	if (!file)
		return (ft_error("error: corrupted file"));
	fclose(file);
	std::cout << "alright" << std::endl;
	return (0);
}