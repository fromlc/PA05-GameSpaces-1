//------------------------------------------------------------------------------
// PlanetX : derived class definition, base class GameSpace
//------------------------------------------------------------------------------
#include "PlanetX.h"

#include <iostream>

// constructor
PlanetX::PlanetX()
{
	name = "Planet X";
	description = "a giant planet with methane oceans and giant volcanoes";

	// BEGIN Don't change these!
	addEntity({ "Rover 1 explorer drone", -10 });
	addEntity({ "Mysterious vapor being", 10 });
	addEntity({ "Aquarium fish", 0 });
	// END Don't change these!

	// add your own occupants here
}

// display status and occupant list 
void PlanetX::print()
{
	size_t eCount = getEntityCount();

	std::cout << name << " has " << eCount << " occupants:\n";

	for (int i = 0; i < eCount; i++)
	{
		Entity ent = getEntity(i);
		std::cout << "\t" << ent.name;
		
		if (ent.health > 0)
			std::cout << " is alive!\n";
		else if (ent.health == 0)
			std::cout << " is unfortunately dead :(\n";
		else
			std::cout << " is a mech\n";
	}
	std::cout << "\n";
}

// display message, then status and occupant list 
void PlanetX::print(const std::string& message)
{
	std::cout << name << " is a " << description << ".\n";
	print();
}

