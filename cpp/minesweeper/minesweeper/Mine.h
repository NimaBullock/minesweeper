#pragma once

#include "Tile.h"
#include <vector>

/*
* Mine.h and Mine.cpp are no longer used, but are present for reference's sake.
*/

class Mine {
public:
	Mine();
	~Mine();

	std::vector<Tile> neighbors;
	bool detonated;

	std::vector<Tile> setNeighbors(std::vector<std::vector<int>>);
	void detonateMine();
};