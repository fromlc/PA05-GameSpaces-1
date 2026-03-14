//------------------------------------------------------------------------------
// PlanetX : derived class definition, base class GameSpace
//------------------------------------------------------------------------------
#include "GameSpace.hpp"

class PlanetX : public GameSpace
//------------------------------------------------------------------------------
{
private:
public:
	// constructors
	PlanetX();

	PlanetX(const std::string& pName);

	// remove live Entities from Entity vector
	void removeLiveEntities();

	// display status
	void print();
};