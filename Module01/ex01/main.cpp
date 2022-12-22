#include "Zombie.hpp"
#include <climits>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	Zombie *horde;
	char *string = NULL;
	int i;

	if (argc < 2 || argc > 3)
	{
		std::cout << "Insert the amount of zombies to create, and optionally their name" << std::endl;
		return (1);
	}
	if (strtol(argv[1], &string, 0) < INT_MAX && argc == 3)
		horde = zombieHorde(atoi(argv[1]), argv[2]);
	else if (strtol(argv[1], &string, 0) < INT_MAX)
		horde = zombieHorde(atoi(argv[1]), "no name");
	else
	{
		std::cout << "too many zombies" << std::endl;
		return (1);
	}
	i = 0;
	while (i < atoi(argv[1]))
		horde[i++].announce();
	delete [] horde;
	return (0);
}
