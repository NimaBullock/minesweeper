#pragma once

#include "Tile.h"
#include <vector>

class Mine {
public:
	Mine();
	~Mine();

	std::vector<Tile> neighbors;
	bool detonated;

	Tile getNeighbors(std::vector<std::vector<int>>);
}