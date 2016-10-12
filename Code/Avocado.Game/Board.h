#pragma once

#include "tile.h"
#include "BoardStateBase.h"

class Board
{
private :
	
	Tile _tiles[8][8];

	BoardStateBase _boardState;

	Tile GetTile(int x, int y);

public:
	Board();
	~Board();
	void Select(int x, int y);
};

