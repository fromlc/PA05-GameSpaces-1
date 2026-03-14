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

	size_t eCount = getEntityCount();
	std::cout << name << " has " << eCount << " occupants:\n";

	for (size_t i = 0; i < eCount; i++)
	{
		Entity ent = getEntity(i);
		std::cout << "\t" << ent.getName();
		
		int eHealth = ent.getHealth();
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

