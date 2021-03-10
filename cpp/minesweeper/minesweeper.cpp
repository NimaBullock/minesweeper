/* This program was designed to serve as a light version of
 a minesweeper, written in multiple languages.
 The following is the C++ approach to implementation.
*/

#include <iostream>
#include <vector>
#include <random>
#include "Mine.h"
#include "Tile.h"

static std::mt19937 s_mersenneTwisterRand(std::mt19937::default_seed);

int main()
{
    
}

std::vector<std::vector<int>> generateBoard(int length = 8, int width = 8, float mineChance = 0.25) {
//function to generate a board, defaults to 8x8, and places mines with a default 25% chance on each tile
//returns a 2d-vector array of Tiles

}

void printBoard() {

}
