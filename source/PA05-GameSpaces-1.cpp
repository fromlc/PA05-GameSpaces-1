//------------------------------------------------------------------------------
// PA05-GameSpaces-1.cpp : app code with entry point
//------------------------------------------------------------------------------
#include "PlanetX.h"
#include "Spaceship.h"

#include <string>

//------------------------------------------------------------------------------
// constants
//------------------------------------------------------------------------------
constexpr int WARP_THERE = 8;
constexpr int WARP_AWAY = 10;

//------------------------------------------------------------------------------
// entry point
//------------------------------------------------------------------------------
int main()
{
    PlanetX px;
    px.setName("Planet X");
    
    // display all entities
    px.print(false);

    Spaceship ship;
    ship.setName("The Mothership");
    ship.setOnTheWay(true);
    ship.setInOrbit(false);
    ship.setSpeed(WARP_THERE);
    ship.print();

    ship.setInOrbit(true);
    ship.setOnTheWay(false);

    // move Entities to from planet to ship
    size_t planetOcc = px.getEntityCount();
    for (size_t i = 0; i < planetOcc; i++) 
    {
        Entity e = px.getEntity(i);

        if (e.health > 0)
            ship.addEntity(e);
    }
    ship.print();

    // display only mech and non-living entities
    px.print(true);

    // escape the planet's destruction!
    ship.setInOrbit(false);
    ship.setOnTheWay(false);
    ship.setSpeed(WARP_AWAY);
    ship.print();

    return 0;
}
