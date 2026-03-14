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

    // getters and setters
    int getSpeed() const;
    void setSpeed(int spd);

    // display status
    void print();
};

