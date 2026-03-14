//------------------------------------------------------------------------------
// PA05-GameSpaces-1.cpp : app code with entry point
//------------------------------------------------------------------------------
#include "PlanetX.h"

// entry point
//------------------------------------------------------------------------------
int main()
{
    PlanetX px;
    px.setName("Planet X");
    px.setDescription(
        " is a giant planet with methane oceans and enormous active volcanoes.");

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
