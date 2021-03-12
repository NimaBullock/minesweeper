#pragma once

#include <vector>

class Tile {
public:
	Tile();

	bool hasMine;
	bool leftEdge, rightEdge, topEdge, bottomEdge;
	int locationx;
	int locationy;
	int mineCount;

	void incrementCount() { mineCount++; }
	void isUpperEdge() { topEdge = 1; }
	void isLowerEdge() { bottomEdge = 1; }
	void isRightEdge() { rightEdge = 1; }
	void isLeftEdge() { leftEdge = 1; }

	void setLocation(int x, int y);
	void placeMineHere(int row, int column, std::vector<Tile> board);
	void incrementNeighbors(int row, int column, std::vector<Tile> board);
	std::vector<int> getLocation();
	std::vector<Tile> neighbors;
};
