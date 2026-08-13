#include <iostream>
#include <vector>
#include "EntityFactory.hpp"

int	main(void)
{
	std::vector<std::string> kinds = {"orc", "bat", "boss", "bat"};
	for (const auto& kind : kinds)
	{
		auto e = EntityFactory::make(kind);
		std::cout << "spawned " << e->describe() << "\n";
	}
}
