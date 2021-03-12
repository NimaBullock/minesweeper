#pragma once

#include <vector>
#include "Tile.h"

class Board {
protected:
	std::vector<Tile> boardLayout;
	std::vector<Tile> mineLoc;
	int boardSize;

public:
	Board();
	~Board();

	void printBoard();
	void generateBoard(int row, int column, float mineChance);
	int revealTile(Tile revealed);
	void incrementNeighbors(int rowsize, Tile NewMine);

	Tile at(int index) { return boardLayout.at(index); }
	void setSize(int size) { boardSize = size; }
	int size() { return boardSize; }
};