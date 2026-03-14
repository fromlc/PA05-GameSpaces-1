//------------------------------------------------------------------------------
// GameSpace.hpp : base class with Entity vector
//------------------------------------------------------------------------------
#pragma once

#include <iostream>
#include <string>
#include <vector>

//------------------------------------------------------------------------------
// constants
//------------------------------------------------------------------------------
const int HEALTH_LIVE = 1;
const int HEALTH_DEAD = 0;
const int HEALTH_MECH = -1;

class Entity
//------------------------------------------------------------------------------
{
private:
	int health;
	std::string name;

public:
	// default constructor
	Entity() : name("default mech"), health(-1)
	{ }

	// overload constructor
	Entity(const std::string& nameStr, int healthPts)
		: name(nameStr) 
		, health(healthPts)
	{ }

	//copy constructor
	Entity(Entity& rhsEnt)
	{
		name = rhsEnt.name;
		health = rhsEnt.health;
	}

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
	void setName(const std::string& nameStr) { name = nameStr; }

	const std::string& getDescription() const { return description; };
	void setDescription(const std::string& descStr) { description = descStr; }

	void addEntity(Entity ent) { vEntities.push_back(ent); }
	size_t getEntityCount() { return vEntities.size(); }
	Entity& getEntity(size_t index) { return vEntities.at(index); }

	// display list of beings on board ship
	void listOccupants()
	{
		for (Entity& e : vEntities) {
			std::cout << "\t" << e.getName() << "\n";
		}
	}

	// derived classes must provide
	virtual void print() = 0;
};

