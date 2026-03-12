//------------------------------------------------------------------------------
// Spaceship.cpp : derived class definition, base class GameSpace
//------------------------------------------------------------------------------
#include "Spaceship.h"

#include <iostream>

// constructor
Spaceship::Spaceship() : speed(0), inOrbit(false), onTheWay(true)
{
	addEntity({ "Admiral LC", 10 });
	addEntity({ "First Officer Kat", 10 });
	addEntity({ "Yeoman Dawg", 10 });
}

// getters and setters

int Spaceship::getSpeed() const { return speed; }

void Spaceship::setSpeed(int spd) { speed = spd; }

// app code uses boolean members to control output
bool Spaceship::isInOrbit() const { return inOrbit; }

void Spaceship::setInOrbit(bool orbiting) { inOrbit = orbiting; }

bool Spaceship::isOnTheWay() const { return onTheWay; }

void Spaceship::setOnTheWay(bool going) { onTheWay = going; }

// display list of beings on board ship
void Spaceship::listOccupants()
{
	std::cout << name << " has " << getEntityCount() << " living beings aboard:\n";

	for (auto& ent : vEntities) {
		std::cout << "\t" << ent.name << "\n";
	}
	std::cout << "\n";
}

// display ship status
void Spaceship::print() 
{
	// messages in orbit around the planet
	if (inOrbit) {
		std::cout << name 
		    << " has arrived in the nick of time!\n\n"
			<< name << " is assuming geosynchronous orbit.\n\n"
			<< name << " is evacuating all living beings from the planet!\n\n"
			<< "After frantic evacuation efforts, ";

		return;
	}

	// messages for going to the planet
	if (onTheWay)
	{
		std::cout << name << " is traveling at Warp " << speed 
		    << " to the planet on a mission of mercy!\n\n";

		listOccupants();
	}
	else
	{
		std::cout << "Evacuation mission complete!\n\n";
		listOccupants();

		std::cout << name << " is speeding away at Warp " << speed
			<< " to escape total destruction!\n";
	}
}


