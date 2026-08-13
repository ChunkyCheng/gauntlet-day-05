#pragma once

#include <string>

class	Entity
{
	public:
		Entity(void) = default;
		Entity(const Entity& other) = delete;
		Entity&	operator=(const Entity& other) = delete;
		virtual ~Entity(void) = default;

		virtual std::string		describe(void) const = 0;
};

