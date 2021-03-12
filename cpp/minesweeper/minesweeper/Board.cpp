#include "Board.h"
#include "RandGen.h"
#include <random>

Board::Board(){
    boardSize = 0;
}

Board::~Board() {
    this->printBoard();
    printf("\nGame Over.");
    boardLayout.clear();
    mineLoc.clear();
}

void Board::incrementNeighbors(int rowsize, Tile newMine) {
    std::vector<int> tileCoord = newMine.getLocation();

    // ensure the tiles exist before trying to increment the tiles there.
    if (!(newMine.topEdge)) {
        this->at(tileCoord[0] - rowsize).incrementCount();
        if (!(newMine.leftEdge)) { this->at(tileCoord[0] - (rowsize + 1)).incrementCount(); }
        else if (!(newMine.rightEdge)) { this->at(tileCoord[0] - (rowsize - 1)).incrementCount(); }
    }
    if (!(newMine.leftEdge)) { this->at(tileCoord[0] - 1).incrementCount(); }
    if (!(newMine.rightEdge)) { this->at(tileCoord[0] + 1).incrementCount(); }
    if (!(newMine.bottomEdge)) {
        this->at(tileCoord[0] + rowsize).incrementCount();
        if (!(newMine.leftEdge)) { this->at(tileCoord[0] + (rowsize - 1)).incrementCount(); }
        else if (!(newMine.rightEdge)) { this->at(tileCoord[0] + (rowsize + 1)).incrementCount(); }
    }
}

void Board::generateBoard(int row, int column, float mineChance) {
    //function to generate a board, defaults to 8x8, and places mines with a default 25% chance on each tile
    //returns a vector array of Tiles
    Tile newTile, newMine;
    this->setSize(row * column);

    // following for loop generates the board with tile objects
    for (int x = 0; x < row; x++) {
        for (int y = 0; y < column; y++) {
            newTile.setLocation(x, y);
            if (x == 0) { newTile.isUpperEdge(); }
            else if (x == row) { newTile.isLowerEdge(); }
            if (y == 0) { newTile.isLeftEdge(); }
            else if (y == row) { newTile.isRightEdge(); }
            boardLayout.push_back(newTile);
        }
    }

    // following loop goes through the board and places mines on some tiles
    float percent;
    for (int i = 0; i < this->size(); i++) {
        // the below creates a float rand using the mersenne twister created as a static
        percent = RandGen::RandFloat();
        if (percent <= mineChance) {
            newMine = boardLayout.at(i);
            newMine.hasMine = true;
            mineLoc.push_back(newMine);
        }
    }

}

int Board::revealTile(Tile revealed) {
    return 0;
}

void Board::printBoard() {
    printf("\nPLACEHOLDER: BOARD\n");
}