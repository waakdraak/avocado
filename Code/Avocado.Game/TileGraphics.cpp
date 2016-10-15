#include "stdafx.h"
#include "TileGraphics.h"


TileGraphics::TileGraphics(GameTexture &tileTexture, int height, int width, float horizontalOffset, float verticalOffset) 
	: TileGraphicsBase(tileTexture), _horizontalOffset(horizontalOffset), _verticalOffset(verticalOffset)
{

	_sprite = sf::RectangleShape(sf::Vector2f(50, 50));
	_sprite.setPosition(sf::Vector2f(_horizontalOffset, _verticalOffset));
	_sprite.setFillColor(sf::Color::Green);

}

sf::RectangleShape& TileGraphics::GetDrawable() {
	return _sprite;
}

void TileGraphics::SetOrigin() {}

TileGraphics::~TileGraphics()
{
}
