//------------------------------------------------------------------------------
// PlanetX : derived class definition, base class GameSpace
//------------------------------------------------------------------------------
#include "PlanetX.h"

#include <iostream>

// constructor
PlanetX::PlanetX()
{
}

// display status and occupant list 
void PlanetX::print()
{
	std::cout << name << description << "\n";
	std::cout << name << " has " << vEntities.size() << " occupants:\n";

	for (Entity e : vEntities)
	{
		std::cout << "\t" << e.getName();
		
		int eHealth = e.getHealth();
		if (eHealth > 0)
			std::cout << " is alive!\n";
		else if (eHealth == 0)
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

