//------------------------------------------------------------------------------
// Spaceship.h : derived class declaration, base class GameSpace
//------------------------------------------------------------------------------
#pragma once

#include "GameSpace.hpp"

class Spaceship : public GameSpace
{
private:
    int speed;
    bool inOrbit;

public:
    Spaceship();

    int getSpeed() const;
    void setSpeed(int spd);

    bool isInOrbit() const;
    void setInOrbit(bool orbiting);

    void print();
};

