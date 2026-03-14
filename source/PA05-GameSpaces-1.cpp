//------------------------------------------------------------------------------
// PA05-GameSpaces-1.cpp : app code with entry point
//------------------------------------------------------------------------------
#include "PlanetX.h"
#include "Spaceship.h"

//------------------------------------------------------------------------------
// constants
//------------------------------------------------------------------------------
const std::string PLANET_NAME = "Planet X";
const std::string PLANET_IS =
	" is a giant planet with methane oceans and enormous active volcanoes.\n";
const std::string PLANET_INITIAL =
	+ "A meteor just hit " + PLANET_NAME + "! \n"
	+ PLANET_NAME + " is about to explode!\n"
	+ "All living beings on " + PLANET_NAME + " are in dire peril!\n";

const std::string SHIP_NAME = "The Mothership";
const std::string SHIP_IS = 
	" is a Galactic-class battle carrier monitoring deep space frequencies.\n";
const std::string SHIP_INITIAL = 
	SHIP_NAME + " receives a distress call from " + PLANET_NAME + "!\n"
	+ SHIP_NAME + " recalls all starfighters and speeds to "
	+ PLANET_NAME + " on a mission of mercy!\n";

const std::string SHIP_RESCUE = 
	" arrives in the nick of time!\n"
	+ SHIP_NAME + " assumes geosynchronous orbit around "
	+ PLANET_NAME + ".\n"
	+ SHIP_NAME + " is frantically evacuating the planet!\n"
	+ "Success! All living beings are safe aboard "
	+ SHIP_NAME + ".\n";

const std::string SHIP_FINAL =
	"Evacuation mission complete!\n"
	+ SHIP_NAME + " is speeding away to escape total destruction!\n";

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

	// display ship status after rescue
	ship.setDescription(SHIP_RESCUE);
	ship.print();
}
