#pragma once

#include <string>

class	Compressor
{
	public:
		Compressor(void);
		Compressor(const Compressor& other) = delete;
		Compressor&	operator=(const Compressor& other) = delete;
		~Compressor(void);

	std::string	compress(const std::string& serialized) const;
};

