#pragma once

#include "Entity.hpp"

class	Bat : public Entity
{
	public:
		Bat(void) = default;
		Bat(const Bat& other) = delete;
		Bat&	operator=(const Bat& other) = delete;
		~Bat(void) = default;
	
	std::string	describe(void) const override { return ("Bat (hp 8)"); }
};

