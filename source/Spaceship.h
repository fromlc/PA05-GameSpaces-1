//------------------------------------------------------------------------------
// Spaceship.h : derived class declaration, base class GameSpace
//------------------------------------------------------------------------------
#pragma once

#include "GameSpace.hpp"

class Spaceship : public GameSpace
{
private:
    int speed;

public:
    Spaceship();

    int getSpeed() const;
    void setSpeed(int spd);

    void print();
};

