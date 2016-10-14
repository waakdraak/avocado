#pragma once
#include "Tile.h"
#include "GameTexture.h"

class TileFactory
{
private: 
	GameTexture &_blackTexture;
	GameTexture &_whiteTexture;

public:
	TileFactory(GameTexture &blackTexture, GameTexture &whiteTexture);
	
	Tile Create(bool isBlack, int height, int width, int horizontalOffset, int verticalOffset);

	~TileFactory();
};

