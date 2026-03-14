//------------------------------------------------------------------------------
// PlanetX : derived class definition, base class GameSpace
//------------------------------------------------------------------------------
#include "PlanetX.h"

#include <iostream>

// constructor
PlanetX::PlanetX() { }

// removes live Entities from vector
void PlanetX::removeLiveEntities()
{
	std::vector<Entity>::iterator newEnd =
		std::remove_if(vEntities.begin(), vEntities.end(),
					   [](Entity& e)
					   {
						   return (e.getHealth() >= HEALTH_LIVE);
					   });

	if (newEnd != vEntities.end())
		vEntities.erase(newEnd, vEntities.end());
}

// display status and occupant list 
void PlanetX::print()
{
	std::cout << name << description << "\n";
	std::cout << name << " has " << vEntities.size() << " occupants:\n";

	listOccupants();
	std::cout << "\n";
}

