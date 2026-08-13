#include "Writer.hpp"
#include <iostream>
#include <fstream>

Writer::Writer(void)
{
}

Writer::~Writer(void)
{
}

void	Writer::write(const std::string& path, const std::string& compressed, unsigned int sum) const
{
	(void)sum;
	std::fstream	ofile(path, std::ios::out);

	if (!ofile.is_open())
	{
		std::cerr << "Error: could not open " << path << std::endl;
		return ;
	}

	ofile << compressed;
	std::cout << "write\t\t-> " << path << " (" << compressed.size() << " bytes)" << std::endl;
}
