#include "Tile.h"

Tile::Tile() {
	locationx = -1;
	locationy = -1;
	revealed = false;
	mineCount = 0;
	hasMine = false;
	leftEdge = false;
	rightEdge = false;
	topEdge = false;
	bottomEdge = false;
}

void Tile::setLocation(int x, int y) {
	locationx = x;
	locationy = y;
}

std::vector<int> Tile::getLocation() {
	std::vector<int> location = { locationx, locationy };
	return location;
}