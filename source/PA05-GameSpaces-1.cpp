//------------------------------------------------------------------------------
// PA05-GameSpaces-1.cpp : app code with entry point
//------------------------------------------------------------------------------
#include "PlanetX.h"
#include "Spaceship.h"

// entry point
//------------------------------------------------------------------------------
int main()
{
    PlanetX px;
    px.setName("Planet X");
    px.print();

    Spaceship ship;
    ship.setName("The Mothership");
    ship.print();
}
