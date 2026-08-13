#pragma once

#include <string>

class	Checksum
{
	public:
		Checksum(void);
		Checksum(const Checksum& other) = delete;
		Checksum&	operator=(const Checksum& other) = delete;
		~Checksum(void);

		unsigned int	of(const std::string& compressed) const;
};

