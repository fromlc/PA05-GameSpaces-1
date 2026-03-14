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
// entry point
//------------------------------------------------------------------------------
int main()
{
    PlanetX px;
    px.setName(PLANET_NAME);
    px.setDescription(PLANET_IS + PLANET_INITIAL);

	// BEGIN Don't change these!
	// mech Entity, don't rescue
	px.addEntity({ "Rover 1 explorer drone", -10 });
	// living bio Entity, do rescue
	px.addEntity({ "Mysterious vapor being", 10 });
	// non-living bio, don't rescue
	px.addEntity({ "Aquarium fish", 0 });
	// END Don't change these!

	// add your own occupants here

	// mech Entities have a negative health value.
	// non-living biological Entities have a health value of 0.
	// living biological Entities have a positive health value.

	// Initial planet status
    px.print();
}
