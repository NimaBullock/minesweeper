/* This program was designed to serve as a light version of
 a minesweeper, written in multiple languages.
 The following is the C++ approach to implementation.
*/

#include <iostream>
#include <vector>
#include <random>
#include "Tile.h"
#include "Board.h"

static std::mt19937 mersenneTwisterRand(std::mt19937::default_seed);
int row = 8, column = 8;
int chosenTile;
float mineChance = 0.25;

int main(int aArgc, char* aArgv[])
{
    if (aArgc >= 2) {
        row = atoi(aArgv[1]);
        column = atoi(aArgv[2]);
    }
    if (aArgc == 3) {
        mineChance = atof(aArgv[3]);
    }
    Board fullBoard;
    fullBoard.generateBoard(row, column, mineChance);
    fullBoard.printBoard();
    for (int turnCount = 0;; turnCount++) {
        printf("Turn %i: Choose a tile to reveal.\n", turnCount);
        std::cin >> chosenTile;
    }
}

