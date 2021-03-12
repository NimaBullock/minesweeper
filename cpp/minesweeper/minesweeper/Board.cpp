#include "Board.h"
#include "RandGen.h"
#include <random>


Board Board::generateBoard(int row, int column, float mineChance) {
    //function to generate a board, defaults to 8x8, and places mines with a default 25% chance on each tile
    //returns a vector array of Tiles
    Board board;
    Tile newTile;
    board.setSize(row * column);

    // following for loop generates the board with tile objects
    for (int x = 0; x < row; x++) {
        for (int y = 0; y < column; y++) {
            newTile.setLocation(x, y);
            if (x == 0) { newTile.isUpperEdge(); }
            else if (x == row) { newTile.isLowerEdge(); }
            if (y == 0) { newTile.isLeftEdge(); }
            else if (y == row) { newTile.isRightEdge(); }

        }
    }

    // following loop goes through the board and places mines on some tiles
    float percent;
    for (unsigned int i = 0; i < board.size(); i++) {
        // the below creates a float rand using the mersenne twister created as a static
        percent = RandFloat();
        if (percent <= 0.25) {

        }
    }

    return board;
}

void Board::printBoard() {

}