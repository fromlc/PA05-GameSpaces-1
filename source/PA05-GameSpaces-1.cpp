//------------------------------------------------------------------------------
// PA05-GameSpaces-1.cpp
//------------------------------------------------------------------------------
#include "PA05_constants.h"
#include "PlanetX.h"
#include "Spaceship.h"

//------------------------------------------------------------------------------
// globals
//------------------------------------------------------------------------------
// mech Entities have a negative health value.
// non-living biological Entities have a health value of 0.
// living biological Entities have a positive health value.

// these Entities are used for grading, don't change them
Entity g_planetEnts[] = 
	{ { "Rover 1 explorer drone", -10 }		// mech, don't rescue
	, { "Mysterious vapor being", 10 }		// living bio, do rescue	
	, { "Aquarium fish", 0 }				// non-living bio, don't rescue
// add your own planet Entities here
};

Entity g_shipEnts[] =
	{ { "Admiral LC", 10 }
	, { "First Officer Kat", 10 }
	, { "Yeoman Dawg", 10 }
};

//------------------------------------------------------------------------------
// entry point
//------------------------------------------------------------------------------
int main()
{
	PlanetX px;
	px.setName(PLANET_NAME);

	// populate planet
	for (Entity& e : g_planetEnts)
		px.addEntity(e);

	// set initial planet status
    px.setName(PLANET_NAME);
    px.setDescription(PLANET_IS + PLANET_INITIAL);

	// display initial planet status
    px.print();

	Spaceship ship;
	ship.setName(SHIP_NAME);

	// populate ship
	for (Entity& e : g_shipEnts)
		ship.addEntity(e);

	// display initial ship status
	ship.setDescription(SHIP_IS + SHIP_INITIAL);
	ship.print();

	// copy living beings from planet vector to ship vector
	for (Entity& e : g_planetEnts)
	{
		if (e.getHealth() >= HEALTH_MIN_ALIVE)
			ship.addEntity(e);
	}

	// remove living beings from planet vector


	// display ship status during rescue
	ship.setDescription(SHIP_RESCUE);
	ship.print();

	// display ship status after rescue
	ship.setDescription(SHIP_FINAL);
	ship.print();

	// display planet status after rescue
	px.setDescription(PLANET_FINAL);
	px.print();
}
