#pragma once
#include <memory>
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
	
	std::shared_ptr<Tile> Create(bool isBlack, float height, float width, float horizontalOffset, float verticalOffset);

	~TileFactory();
};

