//------------------------------------------------------------------------------
// GameSpace.hpp : base class with Entity vector
//------------------------------------------------------------------------------
#pragma once

#include <iostream>
#include <string>
#include <vector>

class Entity
//------------------------------------------------------------------------------
{
private:
	std::string name;
	int health;

public:
	// default constructor
	Entity() : name("default mech"), health(-1)
	{ }

	// overload constructor
	Entity(const std::string& nameStr, int healthPts)
		: name(nameStr) 
		, health(healthPts)
	{ }

	// copy constructor
	//Entity(Entity& rhsEnt)
	//{
	//	name = rhsEnt.name;
	//	health = rhsEnt.health;
	//}

	// getters and setters
	const std::string& getName() const { return name; }
	void setName(const std::string& eName) { name = eName; }

	int getHealth() const { return health; }
	void setHealth(int eHealth) { health = eHealth; }
};

class GameSpace
//------------------------------------------------------------------------------
{
protected:
	std::string name;
	std::string description;
	std::vector<Entity> vEntities;

public:
	GameSpace() { }

	const std::string& getName() const { return name; }
	void setName(const std::string& nameStr) { description = nameStr; }

	const std::string& getDescription() const { return description; };
	void setDescription(const std::string& descStr) { description = descStr; }

	void addEntity(Entity ent) { vEntities.push_back(ent); }
	size_t getEntityCount() { return vEntities.size(); }
	Entity& getEntity(size_t index) { return vEntities.at(index); }

	// removes 
	size_t removeEntityIf(int healthCondition)
	{

	}

	virtual void print() = 0;

	void print(const std::string& messageStr)
	{
		std::cout << messageStr;
	}
};

