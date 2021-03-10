#include "Mine.h"
#include "Tile.h"

Mine::Mine() {
    detonated = false;
    neighbors = getNeighbors();
}

Mine::~Mine() {
    detonated = true;
}

Mine::getNeighbors() {

}