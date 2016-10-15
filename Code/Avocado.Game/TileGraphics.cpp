#include "stdafx.h"
#include "TileGraphics.h"


TileGraphics::TileGraphics(GameTexture &tileTexture) 
	: TileGraphicsBase(tileTexture)
{
	_sprite = sf::RectangleShape(sf::Vector2f(50, 50));
	_sprite.setPosition(sf::Vector2f(_horizontalOffset, _verticalOffset));
	_sprite.setFillColor(sf::Color::Green);
}

sf::RectangleShape& TileGraphics::GetDrawable() {
	return _sprite;
}

void TileGraphics::SetOffset(float horizontalOffset, float verticalOffset) {
	_sprite.setPosition(sf::Vector2f(_horizontalOffset, _verticalOffset));
}

void TileGraphics::SetSize(int height, int width) {
	_sprite.setSize(sf::Vector2f(_horizontalOffset, _verticalOffset));
}

TileGraphics::~TileGraphics()
{
}
