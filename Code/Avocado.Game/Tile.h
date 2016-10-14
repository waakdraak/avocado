#pragma once
#include "TileGraphics.h"
#include "StoneBase.h"

enum TileColour
{
	Black,
	White
};

class Tile
{

private:

public:
	Tile(TileGraphics tileGraphics);

	void SetStone(StoneBase stone);
	
	StoneBase GetStone();

	~Tile();
};

