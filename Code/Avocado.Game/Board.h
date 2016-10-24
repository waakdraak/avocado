#pragma once

#include <vector>
#include "TileGraphicsBase.h"
#include "TileGraphics.h"
#include "CommandBase.h"
#include "tile.h"
#include "TileFactory.h"
#include "BoardStateBase.h"

class Board
{
private :
	
	std::vector<CommandBase> _commandList;
	std::vector< std::vector<std::shared_ptr<Tile> > > _tileCollection;
	TileFactory _tileFactory;
	float _tileHeight;
	float _tileWidth;
	float _boardHeight;
	float _boardWidth;

	BoardStateBase _boardState = BoardStateBase(_commandList);

	Tile GetTile(int x, int y);

	void RenderTiles();

public:
	Board(TileFactory tileFactory, float boardHeight, float boardWidth);
	~Board();
	void Select(int x, int y);
};

