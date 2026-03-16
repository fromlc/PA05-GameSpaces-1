//------------------------------------------------------------------------------
// PlanetX : derived class definition, base class GameSpace
//------------------------------------------------------------------------------
#include "GameSpace.hpp"
#include "PlanetX.h"

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

// constructors
PlanetX::PlanetX() { }

PlanetX::PlanetX(const std::string& pName) { name = pName; }

// removes live Entities from vector
void PlanetX::removeLiveEntities()
{
	// std::remove_if() has been available since C++ 98!

	//std::vector<Entity>::iterator newEnd =
	auto newEnd =
		std::remove_if(vEntities.begin(), vEntities.end(),
					   [](Entity& e)
					   {
						   return (e.getHealth() >= HEALTH_LIVE);
					   });

	// remove_if() moves elements to the end of the vector, but 
	// does not delete them so call .erase() to trim removed
	// elements off the end of the vector

	vEntities.erase(newEnd, vEntities.end());

	// C++ 20 offers std::erase_if() that combines remove_if() and .erase()
	size_t nErased = std::erase_if(vEntities,
				  [](Entity& e) { return (e.getHealth() >= HEALTH_LIVE); });
}

// display status and occupant list 
void PlanetX::print()
{
	std::cout << name << description << "\n";
	std::cout << name << " has " << vEntities.size() << " occupants:\n";

	listOccupants();
	std::cout << "\n";
}

