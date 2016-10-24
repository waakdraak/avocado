

#include "stdafx.h"
#include "TileGraphics.h"


TileGraphics::TileGraphics(GameTexture &tileTexture) 
	: TileGraphicsBase(tileTexture),
	_sprite(sf::RectangleShape(sf::RectangleShape(sf::Vector2f(50, 50))))
{
	_sprite.setPosition(50.0f, 50.0f);
	_sprite.setFillColor(sf::Color::Green);
}

sf::RectangleShape& TileGraphics::GetDrawable() {
	return _sprite;
}

void TileGraphics::SetOffset(float horizontalOffset, float verticalOffset) {
	_sprite.setPosition(sf::Vector2f(horizontalOffset, verticalOffset));
}

void TileGraphics::SetSize(float height, float width) {
	_sprite.setSize(sf::Vector2f(height,width));
}

TileGraphics::~TileGraphics()
{
}
