//------------------------------------------------------------------------------
// Spaceship.cpp : derived class definition, base class GameSpace
//------------------------------------------------------------------------------
#include "Spaceship.h"

#include <iostream>

// constructor
Spaceship::Spaceship() : speed(0), inOrbit(false), onTheWay(true)
{
}

// getters and setters

int Spaceship::getSpeed() const
{
	return speed;
}

void Spaceship::setSpeed(int spd)
{
	speed = spd;
}

// app code uses boolean members to control output
bool Spaceship::isInOrbit() const
{
	return inOrbit;
}

void Spaceship::setInOrbit(bool orbiting)
{
	inOrbit = orbiting;
}

bool Spaceship::isOnTheWay() const
{
	return onTheWay;
}

void Spaceship::setOnTheWay(bool going)
{
	onTheWay = going;
}


// display status and occupant list 
void Spaceship::print()
{
	std::cout << name << description << "\n";
	std::cout << name << " has " << vEntities.size() << " occupants:\n";

	for (Entity e : vEntities) {
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


