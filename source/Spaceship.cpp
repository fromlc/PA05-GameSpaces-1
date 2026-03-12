//------------------------------------------------------------------------------
// Spaceship.cpp : derived class definition, base class GameSpace
//------------------------------------------------------------------------------
#include "Spaceship.h"

#include <iostream>

Spaceship::Spaceship() : speed(0), inOrbit(false) { }

int Spaceship::getSpeed() const { return speed; }

void Spaceship::setSpeed(int spd) { speed = spd; }

bool Spaceship::isInOrbit() const { return inOrbit; }

void Spaceship::setInOrbit(bool orbiting) { inOrbit = orbiting; }

void Spaceship::print() { std::cout << "Spaceship\n"; }


