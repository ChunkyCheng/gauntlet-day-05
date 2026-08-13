#pragma once

#include <memory>
//#include <map>
//#include <functional>
#include "Entity.hpp"

class	EntityFactory
{
	private:
		EntityFactory(void);
		EntityFactory(const EntityFactory& other);
		EntityFactory&	operator=(const EntityFactory& other);
		~EntityFactory(void);
	
	public:
		static std::unique_ptr<Entity>	make(const std::string& kind);
		
		//using maker = std::function<std::unique_ptr<Entity>(void)>;

	private:
		//static const std::map<std::string, maker>	FACTORY_MAP;
};

