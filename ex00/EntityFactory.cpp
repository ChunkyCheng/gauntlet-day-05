#include "EntityFactory.hpp"
#include "Orc.hpp"
#include "Bat.hpp"
#include "Boss.hpp"

/*
const std::map<std::string, EntityFactory::maker>	EntityFactory::FACTORY_MAP = {
	{"orc",		[](void) { return (std::make_unique<Orc>()); } },
	{"bat",		[](void) { return (std::make_unique<Bat>()); } },
	{"boss",	[](void) { return (std::make_unique<Boss>()); } }
};

std::unique_ptr<Entity>	EntityFactory::make(const std::string& kind)
{
	const auto it = FACTORY_MAP.find(kind);
	if (it != FACTORY_MAP.end())
		return (it->second());
	return (nullptr);
}
*/

std::unique_ptr<Entity>	EntityFactory::make(const std::string& kind)
{
	if (kind == "orc")	return (std::make_unique<Orc>());
	if (kind == "bat")	return (std::make_unique<Bat>());
	if (kind == "boss")	return (std::make_unique<Boss>());
	return (nullptr);
}
