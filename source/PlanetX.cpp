//------------------------------------------------------------------------------
// PlanetX.cpp : derived class definition, base class GameSpace
//------------------------------------------------------------------------------
#include "PlanetX.h"

#include <iostream>

// constructor
PlanetX::PlanetX()
{
	name = "Planet X";
	description = "a giant planet with methane oceans and giant volcanoes";

	// BEGIN Don't change these!
	addEntity({ "Rover 1 explorer drone", -10 });	// mech Entity, don't rescue
	addEntity({ "Mysterious vapor being", 10 });	// living bio, do rescue
	addEntity({ "Aquarium fish", 0 });				// non-living bio, don't rescue
	// END Don't change these!

	// add your own occupants here

	// mech Entities have a negative health value.
	// non-living biological Entities have a health value of 0.
	// living biological Entities have a positive health value.
}

// must override pure virtual function
void PlanetX::print() { }

// display status and occupant list 
void PlanetX::print(bool aliveOnly)
{
	if (!aliveOnly)
		std::cout << "A meteor just hit " << name << "! All is lost!\n"
		    << "All living beings on the planet are in dire peril!\n\n";

	std::cout << name << " has these occupants:\n";

	for (auto& ent : vEntities)
	{
		if (aliveOnly && ent.health > 0)
			continue;

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
//void PlanetX::print(const std::string& message)
//{
//	std::cout << message << ".\n";
//}

