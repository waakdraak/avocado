#pragma once
#include <SFML/Graphics.hpp>
#include "TileGraphicsBase.h"
#include "GameTexture.h"

class TileGraphics : public TileGraphicsBase
{
private:
	float _horizontalOffset;
	float _verticalOffset;
	sf::RectangleShape _sprite;

public:
	TileGraphics(GameTexture &tileTexture, int height, int width, float horizontalOffset, float verticalOffset);

	sf::RectangleShape& GetDrawable();

	void SetOrigin();

	~TileGraphics();
};

