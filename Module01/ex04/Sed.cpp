#include "Sed.hpp"

Sed::Sed(std::string file, std::string s1, std::string s2) : _file(file), _s1(s1), _s2(s2)
{
	std::cout << "Sed constructor called" << std::endl;
}

Sed::~Sed(void)
{
	std::cout << "Sed destructor called" << std::endl;
}

std::string Sed::getFile(void) const
{
	return (this->_file);
}

std::string Sed::getSearch(void) const
{
	return (this->_s1);
}

std::string Sed::getReplace(void) const
{
	return (this->_s2);
}

void Sed::openStreams(void)
{
	std::ifstream ifs;
	std::ofstream ofs;
	std::string suffix = ".replace";
	std::string line;

	ifs.open(this->getFile());
	if (!ifs.is_open())
		throw "Error while opening input file";
	ofs.open(this->getFile() + suffix, std::ios::trunc);
	if (!ofs.is_open())
		throw "Error while opening output file";
	while (std::getline(ifs, line))
	{
		ofs << Sed::replaceAndReturn(line);
		if (!ofs.eof())
			ofs << std::endl;
	}
	ifs.close();
	ofs.close();
}

std::string Sed::replaceAndReturn(std::string line)
{
	std::stringstream s;
	int i;
	int j;
	int search_len;

	i = 0;
	search_len = this->getSearch().length();
	while (line[i])
	{
		j = 0;
		while (line[i + j] == this->getSearch()[j] && j < search_len)
			j++;
		if (j == search_len)
		{
			s << this->getReplace();
			i += j - 1;
		}
		else
			s << line[i];
		i++;
	}
	return (s.str());
}