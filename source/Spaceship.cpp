//------------------------------------------------------------------------------
// Spaceship.cpp : derived class definition, base class GameSpace
//------------------------------------------------------------------------------
#include "Spaceship.h"

#include <iostream>

Spaceship::Spaceship() : speed(0), inOrbit(false)
{
	addEntity({ "Grand Poobah LC", 10 });
}

int Spaceship::getSpeed() const { return speed; }

void Spaceship::setSpeed(int spd) { speed = spd; }

bool Spaceship::isInOrbit() const { return inOrbit; }

void Spaceship::setInOrbit(bool orbiting) { inOrbit = orbiting; }

void Spaceship::print() 
{
	size_t eCount = getEntityCount();

	std::cout << name << " has " << eCount << " occupants:\n";

	for (int i = 0; i < eCount; i++) {
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


