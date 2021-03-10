#include <vector>

class Tile {
public:
	Tile();

	bool hasMine;
	int locationx;
	int locationy;
	std::vector<Tile> neighbors;
};
