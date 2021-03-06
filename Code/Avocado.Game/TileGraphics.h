#pragma once
#include  <memory>
#include <SFML/Graphics.hpp>
#include "TileGraphicsBase.h"
#include "GameTexture.h"

class TileGraphics : public TileGraphicsBase
{
private:
	float _horizontalOffset;
	float _verticalOffset;
    sf::RectangleShape  _sprite;

public:
	TileGraphics(GameTexture &tileTexture);

	sf::RectangleShape& GetDrawable();

	void SetOffset(float horizontalOffset, float verticalOffset);

	void SetSize(float height, float width);

	~TileGraphics();
};

