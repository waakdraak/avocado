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
	TileGraphics* _tileGraphics;

public:
	Tile(TileGraphics* tileGraphics);

	TileGraphics& GetGraphics();

	void SetStone(StoneBase stone);
	
	StoneBase GetStone();

	~Tile();
};

