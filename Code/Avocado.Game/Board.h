#pragma once

#include <vector>
#include "TileGraphicsBase.h"
#include "TileGraphics.h"
#include "TileRenderer.h"
#include "CommandBase.h"
#include "tile.h"
#include "TileFactory.h"
#include "BoardStateBase.h"



class Board
{
private :
	
	std::vector<CommandBase> _commandList;
	std::vector< std::vector<Tile*> > &_tileCollection;

	BoardStateBase _boardState = BoardStateBase(_commandList);

	Tile GetTile(int x, int y);

public:
	Board(TileRenderer &tileRenderer);
	~Board();
	void Select(int x, int y);
};

