#include "Mine.h"
#include "Tile.h"

/*
* Mine.h and Mine.cpp are no longer used, but are present for reference's sake.
*/

Mine::Mine() {
    this.detonated = false;
    this.neighbors = getNeighbors();
}
Mine::~Mine() {}

Mine::setNeighbors(Tile baseTile) {

    this.neighbors.insert();
}

Mine::detonateMine() {

    this.detonated = true;
}