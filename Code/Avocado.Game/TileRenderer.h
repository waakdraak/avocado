#pragma once
#include <vector>
#include "Tile.h"
#include "TileFactory.h"
class TileRenderer
{
private :
	TileFactory _tileFactory;
	int _tileHeight;
	int _tileWidth;

public:
	TileRenderer(TileFactory tileFactory, int boardHeight, int boardWidth);
	
	std::vector< std::vector<Tile> > RenderTiles();

	~TileRenderer();
};

