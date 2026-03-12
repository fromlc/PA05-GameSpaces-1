#include "GameSpace.hpp"

GameSpace::GameSpace()
{
}

const std::string& GameSpace::getName() const
{
	return name;
}
void GameSpace::setName(const std::string& nameStr)
{
	description = nameStr;
}

const std::string& GameSpace::getDescription() const
{
	return description;
};
void GameSpace::setDescription(const std::string& descStr)
{
	description = descStr;
}

void GameSpace::addEntity(Entity ent)
{
	vEntities.push_back(ent);
}

size_t GameSpace::getEntityCount()
{
	return vEntities.size();
}

Entity& GameSpace::getEntity(size_t index)
{
	return vEntities.at(index);
}

