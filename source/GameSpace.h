#pragma once

#include "Entity.h"

#include <string>
#include <vector>

class GameSpace
//------------------------------------------------------------------------------
{
protected:
	std::string name;
	std::string description;
	std::vector<Entity> vEntities;

public:
	GameSpace();

	const std::string& getName() const;
	void setName(const std::string& nameStr);

	const std::string& getDescription() const;
	void setDescription(const std::string& descStr);

	void addEntity(Entity ent);
	size_t getEntityCount();
	Entity& getEntity(size_t index);

	virtual void print() = 0;

	void print(const std::string& messageStr);
};
