#pragma once

#include <string>

class	Writer
{
	public:
		Writer(void);
		Writer(const Writer& other) = delete;
		Writer&	operator=(const Writer& other) = delete;
		~Writer(void);

	void	write(const std::string& path, const std::string& compressed, unsigned int sum) const; 
};

