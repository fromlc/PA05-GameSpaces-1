//------------------------------------------------------------------------------
// PA05-GameSpaces-1.cpp : app code with entry point
//------------------------------------------------------------------------------
#include "PlanetX.h"
#include "Spaceship.h"

//------------------------------------------------------------------------------
// constants
//------------------------------------------------------------------------------
// Entity
constexpr int HEALTH_MIN_ALIVE = 1;

// Planet and Spaceship Names
const std::string PLANET_NAME = "Planet X";
const std::string SHIP_NAME = "The Mothership";

// PlanetX status
const std::string PLANET_IS =
	" is a giant planet with methane oceans and enormous active volcanoes.\n";
const std::string PLANET_INITIAL =
	+ "A meteor just hit " + PLANET_NAME + "! \n"
	+ PLANET_NAME + " is about to explode!\n"
	+ "All living beings on " + PLANET_NAME + " are in dire peril!\n";
const std::string PLANET_FINAL =
+"Meanwhile, " + PLANET_NAME + " provides an excellent fireworks display!\n"
+ "All mechs and non-living bios are buried in oceans of magma as\n"
+ "everyone on " + SHIP_NAME + " watches in silence.\n"
+ "\nGoodbye " + PLANET_NAME + "!\n";

// Spaceship status
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
	+ "Mission complete! All living beings are safe aboard "
	+ SHIP_NAME + ".\n";

const std::string SHIP_FINAL =
	" speeds away, barely escaping total destruction!\n"
	+ PLANET_NAME + " explodes while all aboard "
	+ SHIP_NAME + " peacefully sip Earl Grey, hot.\n";

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
