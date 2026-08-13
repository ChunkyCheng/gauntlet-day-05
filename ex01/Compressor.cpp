#include "Compressor.hpp"
#include <iostream>

Compressor::Compressor(void)
{
}

Compressor::~Compressor(void)
{
}

std::string	Compressor::compress(const std::string& serialized) const
{
	std::string compressed;

	for (size_t i = 0; serialized[i]; ++i)
	{
		if ((serialized[i] >= '0' && serialized[i] <= '9') || serialized[i] == ';')
			compressed += serialized[i];
	}
	std::cout	<< "compress\t-> " << compressed
				<< " (" << serialized.size() << " -> " << compressed.size()
				<< " bytes)" << std::endl;
	return (compressed);
}
