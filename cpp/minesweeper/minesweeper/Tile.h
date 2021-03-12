#pragma once

#include <vector>

class Tile {
private:
	int locationx;
	int locationy;
	bool revealed;

public:
	Tile();

	bool hasMine;
	bool leftEdge, rightEdge, topEdge, bottomEdge;
	int mineCount;

	void incrementCount() { mineCount++; }
	void isUpperEdge() { topEdge = 1; }
	void isLowerEdge() { bottomEdge = 1; }
	void isRightEdge() { rightEdge = 1; }
	void isLeftEdge() { leftEdge = 1; }

	void setLocation(int x, int y);
	std::vector<int> getLocation();
	std::vector<Tile> neighbors;
};
