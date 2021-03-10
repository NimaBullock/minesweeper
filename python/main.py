

def generateBoard(length = 8, width = 8):
	"""
	function used to generate the board of any desired size
	defaults to 8x8 board.
	"""
	board = [[0 for x in range(length)] for y in range(width)]

	for x in range(length):
		for y in range(width):
			board[x][y] = generateMine()
			markTilesAroundCoord(x,y,board)



def generateMine(percentMine = 0.25):
	"""
	function used to generate the inidividual mines placed on squares
	defaults to 25% chance to place a mine
	"""
	if(random() < percentMine):
		return -1
	else:
		return 0


def markTilesAroundCoord(x, y, fullBoard):
	"""
	function used to mark all the tiles around the newly placed mine
	"""
	if(x-1 >=0 && x+1 <= fullBoard.size()):
		
