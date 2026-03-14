//------------------------------------------------------------------------------
// Spaceship.cpp : derived class definition, base class GameSpace
//------------------------------------------------------------------------------
#include "Spaceship.h"

#include <iostream>

// constructor
Spaceship::Spaceship() : speed(0)
{ }

// getters and setters

int Spaceship::getSpeed() const { return speed; }
void Spaceship::setSpeed(int spd) { speed = spd; }

// display status and manifest
void Spaceship::print()
{
	std::cout << name << description << "\n";
	std::cout << name << " has " << getEntityCount() << " aboard:\n";

	listOccupants();
	std::cout << "\n";
}


