#pragma once

#include <string>
#include "GameState.hpp"

class	Serializer
{
	public:
		Serializer(void);
		Serializer(const Serializer& other) = delete;
		Serializer&	operator=(const Serializer& other) = delete;
		~Serializer(void);

	std::string	serialize(const GameState& state) const;
};

