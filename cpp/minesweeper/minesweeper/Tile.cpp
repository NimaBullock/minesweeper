#include "Tile.h"

Tile::Tile() {
	hasMine = false;
}

Tile::setLocation(int x, int y) {
	locationx = x;
	locationy = y;
}

Tile::getLocation() {
	std::vector<int> location = {locationx, locationy}
	return location;
}

Tile::incrementNeighbors(int length, int width, std::vector<Tile> board) {
	
}