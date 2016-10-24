#include <memory>
#include "tile.h"

Tile::Tile(GameTexture &tileTexture, float height, float width, float horizontalOffset, float verticalOffset, GameContext& context):  _tileGraphics(TileGraphics(tileTexture))
{
	
	_tileGraphics.SetOffset(horizontalOffset, verticalOffset);
	_tileGraphics.SetSize(height, width);
	context.AddGameEntity(this);
}

sf::RectangleShape Tile::GetSprite() {
	return _tileGraphics.GetDrawable();
}

Tile::~Tile()
{
}
