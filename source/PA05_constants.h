//------------------------------------------------------------------------------
// PA05-constants.h
//------------------------------------------------------------------------------
#pragma once

#include <string>

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
+"A meteor just hit " + PLANET_NAME + "! \n"
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

