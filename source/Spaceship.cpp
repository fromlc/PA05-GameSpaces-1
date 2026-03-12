//------------------------------------------------------------------------------
// Spaceship.cpp : derived class definition, base class GameSpace
//------------------------------------------------------------------------------
#include "Spaceship.h"

#include <iostream>

Spaceship::Spaceship() : speed(0), inOrbit(false), onTheWay(true)
{
	addEntity({ "Grand Poobah LC", 10 });
}

int Spaceship::getSpeed() const { return speed; }

void Spaceship::setSpeed(int spd) { speed = spd; }

bool Spaceship::isInOrbit() const { return inOrbit; }

void Spaceship::setInOrbit(bool orbiting) { inOrbit = orbiting; }

bool Spaceship::isOnTheWay() const { return onTheWay; }

void Spaceship::setOnTheWay(bool going) { onTheWay = going; }

void Spaceship::print() 
{
	// messages in orbit around the planet
	if (inOrbit) {
		std::cout << name 
		    << " has arrived and is assuming geosynchronous orbit around the planet.\n\n"
			<< name << " is now evacuating the planet!\n\n";

		std::cout << name << " has these occupants:\n";

		size_t eCount = getEntityCount();
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

		return;
	}

	// messages for going to the planet
	if (onTheWay)
	{
		std::cout << name << " is traveling at Warp " << speed 
		    << " on a mission of mercy!\n\n";
	}
	else
	{
		std::cout << "Evac mission complete!\n"
			<< name << " is speeding away at Warp " << speed 
			<< " to escape the destruction!\n";
	}
}


