#include "Sed.hpp"

int usage(void)
{
	std::cout << "Syntax: ./SedIsForLosers [filename] string1 string2" << std::endl;
	std::cout << "Replace all occurrencies of string1 with string2" << std::endl;
	return (-1);
}

int main(int argc, char *argv[])
{
	if (argc != 4)
		return (usage());
	Sed sed(argv[1], argv[2], argv[3]);
	try
	{
		sed.openStreams();
	}
	catch(char const *e)
	{
		std::cerr << e << '\n';
		return (-1);
	}
	return (0);
}