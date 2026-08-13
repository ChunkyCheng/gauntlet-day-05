#pragma once

#include "Entity.hpp"

class	Boss : public Entity
{
	public:
		Boss(void) = default;
		Boss(const Boss& other) = delete;
		Boss&	operator=(const Boss& other) = delete;
		~Boss(void) = default;
	
	std::string	describe(void) const override { return ("Boss (hp 300)"); }
};

