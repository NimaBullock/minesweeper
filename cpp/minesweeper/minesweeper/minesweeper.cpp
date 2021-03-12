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
    Board* fullBoard = new Board{};
    fullBoard->generateBoard(row, column, mineChance);
    //printf("board generated");
    fullBoard->printBoard();
    //printf("\nfirstboardprint");
    for (int turnCount = 0;; turnCount++) {
        fullBoard->printBoard();
        printf("Turn %i: Choose a tile to reveal.\n", turnCount);
        std::cin >> chosenTile;
        if (fullBoard->revealTile(fullBoard->at(chosenTile))) {
            delete fullBoard;
            break;
        }
    }
}

