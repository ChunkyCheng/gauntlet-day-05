#include "Serializer.hpp"
#include <iostream>

Serializer::Serializer(void)
{
}

Serializer::~Serializer(void)
{
}

std::string	Serializer::serialize(const GameState& state) const
{
	std::string serialized = 
		"level="
		+ std::to_string(state.level)
		+ ";hp="
		+ std::to_string(state.hp);
	
	std::cout << "serialize\t-> " << serialized << std::endl;
	return (serialized);
}
