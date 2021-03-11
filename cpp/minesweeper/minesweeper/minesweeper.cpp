/* This program was designed to serve as a light version of
 a minesweeper, written in multiple languages.
 The following is the C++ approach to implementation.
*/

#include <iostream>
#include <vector>
#include <random>
#include "Tile.h"

static std::mt19937 mersenneTwisterRand(std::mt19937::default_seed);
int length = 8, width = 8;
float mineChance = 0.25;

int main(int aArgc, char* aArgv[])
{
    if(aArgc >= 2){ 
        length = atoi(aArgv[1]);
        width = atoi(aArgv[2]);
    }
    if (aArgc == 3) {
        mineChance = atof(aArgv[3]);
    }
    std::vector<Tile> fullBoard = generateBoard(length, width, mineChance);
    printBoard(fullBoard);
}

std::vector<Tile> generateBoard(int length, int width, float mineChance) {
//function to generate a board, defaults to 8x8, and places mines with a default 25% chance on each tile
//returns a vector array of Tiles
    std::vector<Tile> board;
    Tile newTile;
    // following for loop generates the board with tile objects
    for (int x = 0; x < length; x++) {
        for (int y = 0; y < width; y++) {
            newTile.setLocation(x, y);
            board.push_back(newTile);
        }
    }

    // following loop goes through the board and places mines on some tiles
    // the algorithm is not optimized and would benefit greatly from optimizaiton.
    float percent;
    std::vector<int> mineLoc;
    for (int i = 0; i < board.size(); i++) {
        // the below creates a float rand using the mersenne twister created as a static
        percent = static_cast<float>(mersenneTwisterRand()) / static_cast<float>(0xFFFFFFFF);
        if (percent <= 0.25) {
            board.at(i).placeMineHere();
            mineLoc.push_back(i);
        }
    }

    return board;
}

void printBoard(std::vector<Tile> board) {

}
