//------------------------------------------------------------------------------
// Spaceship.h : derived class declaration, base class GameSpace
//------------------------------------------------------------------------------
#pragma once

#include "GameSpace.hpp"

#include <string>

class Spaceship : public GameSpace
{
private:
    int speed;
    std::string speedStr;

public:
    Spaceship();

    // getters and setters
    int getSpeed() const;
    void setSpeed(int spd);

    const std::string& getSpeedStr() const;
    void setSpeedStr(const std::string& spdStr);

    // display status
    void print();
};

