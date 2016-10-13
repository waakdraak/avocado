#pragma once
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
	Tile();

	void SetStone(StoneBase stone);
	
	StoneBase GetStone();

	~Tile();
};

