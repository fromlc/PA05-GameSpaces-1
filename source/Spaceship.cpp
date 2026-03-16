//------------------------------------------------------------------------------
// Spaceship.cpp : derived class definition, base class GameSpace
//------------------------------------------------------------------------------
#include "Spaceship.h"

#include <iostream>
#include <string>

// constructors
Spaceship::Spaceship() : speed(0)
{ }

Spaceship::Spaceship(const std::string& sName) : speed(0)
{ name = sName; }

// getters and setters

int Spaceship::getSpeed() const { return speed; }

void Spaceship::setSpeed(int spd) { speed = spd; }

// display status and manifest
void Spaceship::print()
{
	std::cout << name << description;
	if (speed > 0)
		std::cout << speed;
	std::cout << "\n\n";
	std::cout << name << " has " << getEntityCount() << " aboard:\n";

	listOccupants();
	std::cout << "\n";
}


