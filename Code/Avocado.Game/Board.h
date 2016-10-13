#pragma once

#include <vector>
#include "CommandBase.h"
#include "tile.h"
#include "BoardStateBase.h"


class Board
{
private :
	
	std::vector<CommandBase> _commandList;

	Tile _tiles[8][8];

	BoardStateBase _boardState = BoardStateBase(_commandList);

	Tile GetTile(int x, int y);
		

public:
	Board();
	~Board();
	void Select(int x, int y);
};

