//------------------------------------------------------------------------------
// PA05-GameSpaces-1.cpp : app code with entry point
//------------------------------------------------------------------------------
#include "PlanetX.h"

//------------------------------------------------------------------------------
// constants
//------------------------------------------------------------------------------
const std::string PLANET_NAME = "Planet X";
const std::string PLANET_IS =
	" is a giant planet with methane oceans and enormous active volcanoes.\n";
const std::string PLANET_INITIAL =
	+ "A meteor just hit " + PLANET_NAME + "! "
	+ PLANET_NAME + " is about to explode!\n"
	+ "All living beings on " + PLANET_NAME + " are in dire peril!\n";

//------------------------------------------------------------------------------
// globals
//------------------------------------------------------------------------------
// mech Entities have a negative health value.
// non-living biological Entities have a health value of 0.
// living biological Entities have a positive health value.

// these Entities are used for grading, don't change them
Entity g_aEnts[] = 
	{ { "Rover 1 explorer drone", -10 }		// mech, don't rescue
	, { "Mysterious vapor being", 10 }		// living bio, do rescue	
	, { "Aquarium fish", 0 }				// non-living bio, don't rescue
// add your own planet Entities here
};

//------------------------------------------------------------------------------
// entry point
//------------------------------------------------------------------------------
int main()
{
    PlanetX px;

	// set initial planet status
    px.setName(PLANET_NAME);
    px.setDescription(PLANET_IS + PLANET_INITIAL);

	// populate planet
	for (Entity& e : g_aEnts)
		px.addEntity(e);

	// display initial planet status
    px.print();

}
