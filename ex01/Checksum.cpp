#include "Checksum.hpp"
#include <iostream>

Checksum::Checksum(void)
{
}

Checksum::~Checksum(void)
{
}

unsigned int	Checksum::of(const std::string& compressed) const
{
	unsigned int	sum = 0;

	for (size_t i = 0; compressed[i]; ++i)
		sum += compressed[i];
	std::cout << "checksum\t-> 0x" << std::hex << std::uppercase << sum << std::endl;
	return (sum);
}
