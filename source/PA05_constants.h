//------------------------------------------------------------------------------
// PA05-constants.h
//------------------------------------------------------------------------------
#pragma once

#include <string>

//------------------------------------------------------------------------------
// constants
//------------------------------------------------------------------------------
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
" provides an excellent fireworks display!\nGoodbye "
+ PLANET_NAME + "!\n";

// Spaceship speeds
const std::string SHIP_SPEED_WARP = "Speed: Warp ";
const std::string SHIP_SPEED_ORBIT = "Speed: Standard orbital speed ";

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
+ SHIP_NAME + " frantically beams all living beings aboard!\n"
+ "Mission complete! All living beings are safe aboard "
+ SHIP_NAME + ".\n";

const std::string SHIP_FINAL =
" speeds away, barely escaping total destruction!\n"
+ PLANET_NAME + " explodes while all aboard "
+ SHIP_NAME + " peacefully sip Earl Grey, hot.\n";

