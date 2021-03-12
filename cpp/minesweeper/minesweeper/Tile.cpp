#include "Tile.h"

Tile::Tile() {
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

void Tile::placeMineHere(int row, int column, std::vector<Tile> board) {
	hasMine = true;
	this->incrementNeighbors(row, column, board);
}

void Tile::incrementNeighbors(int row, int column, std::vector<Tile> board) {
	std::vector<int> tileCoord = this->getLocation();

	// ensure the row above exists before trying to increment the mines there.
	if (!(this->topEdge)) {

	}

}