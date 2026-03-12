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
    bool onTheWay;

public:
    Spaceship();

    int getSpeed() const;
    void setSpeed(int spd);

    bool isInOrbit() const;
    void setInOrbit(bool orbiting);

    bool isOnTheWay() const;
    void setOnTheWay(bool going);

    void print();
};

