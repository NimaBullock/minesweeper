#pragma once

#include <vector>
#include "Tile.h"

class Board {
protected:
	std::vector<int*> mineLoc;
	int boardSize;

public:
	Board();

	void printBoard();
	Board generateBoard(int row, int column, float mineChance);

	void setSize(int size) { boardSize = size; }
	int size() { return boardSize; }
};