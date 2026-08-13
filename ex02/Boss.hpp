#pragma once

#include "Entity.hpp"

class Visitor;

class Boss : public Entity
{
	public:
		std::string	describe(void) const override { return ("Boss (hp 300)"); }
		int			hp(void) const { return (300); }
		void		accept(Visitor& v) override { v.visit(*this); }
};
