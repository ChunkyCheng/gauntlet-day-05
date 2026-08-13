#pragma once

#include "Entity.hpp"

class	Orc : public Entity
{
	public:
		Orc(void) = default;
		Orc(const Orc& other) = delete;
		Orc&	operator=(const Orc& other) = delete;
		~Orc(void) = default;
	
	std::string	describe(void) const override { return ("Orc (hp 40)"); }
};

