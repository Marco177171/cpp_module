#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *arr;
	int i;

	arr = new Zombie[N];
	i = 0;
	while (i < N)
		arr[i++].setName(name);
	std::cout << "zombieHorde function finished" << std::endl;
	return (arr);
}
