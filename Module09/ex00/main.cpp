#include "BitcoinExchange.hpp"

int ft_error(char *error)
{
    std::cout << error << std::endl;
    return (1);
}

int main(int argc, char *argv[])
{
    FILE *file;
    if (argc != 2)
        return (ft_error("error: arguments must be exactly two!"));
    file = fopen(argv[1], "r");
    return (0);
}