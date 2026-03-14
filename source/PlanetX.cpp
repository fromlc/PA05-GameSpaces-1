//------------------------------------------------------------------------------
// PlanetX : derived class definition, base class GameSpace
//------------------------------------------------------------------------------
#include "PlanetX.h"

#include <iostream>

// constructor
PlanetX::PlanetX() { }

// display status and occupant list 
void PlanetX::print()
{
	std::cout << name << description << "\n";
	std::cout << name << " has " << vEntities.size() << " occupants:\n";

	listOccupants();
	std::cout << "\n";
}

