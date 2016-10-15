#pragma once
#include "Tile.h"
#include "GameContext.h"
#include "GameTexture.h"

class TileFactory
{
private: 
	GameContext &_context;
	GameTexture &_blackTexture;
	GameTexture &_whiteTexture;


public:
	TileFactory(GameTexture &blackTexture, GameTexture &whiteTexture, GameContext &context);
	
	Tile* Create(bool isBlack, int height, int width, float horizontalOffset, float verticalOffset);

	~TileFactory();
};

