#pragma once

#include <memory>
#include <SFML/Graphics.hpp>
#include "GameEntity.h"
#include "GameContext.h"
#include "TileGraphics.h"
#include "StoneBase.h"

enum TileColour
{
	Black,
	White
};

class Tile : public GameEntity
{

private:
	TileGraphics _tileGraphics;

public:
	Tile(GameTexture &tileTexture, float height, float width, float horizontalOffset, float verticalOffset, GameContext& context);

	sf::RectangleShape GetSprite();

	~Tile();
};

