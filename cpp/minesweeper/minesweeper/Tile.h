#include <vector>

class Tile {
public:
	Tile();

	bool hasMine;
	int locationx;
	int locationy;
	int mineCount;

	void setLocation(int x, int y);
	void placeMineHere() { hasMine = true; }
	void incrementCount() { mineCount++; }
	std::vector<int> getLocation();
	std::vector<Tile> neighbors;
};
