//------------------------------------------------------------------------------
// PlanetX.cpp : derived class definition, base class GameSpace
//------------------------------------------------------------------------------
#include "PlanetX.h"

#include <iostream>

// constructor
PlanetX::PlanetX()
{
	name = "Planet X";
	description = " is a giant planet with methane oceans and enormous volcanoes.";

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
	{
		std:: cout << name << description << "\n\n";
		std::cout << "A meteor just hit " << name << "!\n"
			<< name << " is about to explode!\n"
		    << "All living beings on " << name << " are in dire peril!\n\n";
	}

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

