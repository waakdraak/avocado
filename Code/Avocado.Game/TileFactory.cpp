#include "stdafx.h"
#include "TileFactory.h"


TileFactory::TileFactory(GameTexture &blackTexture, GameTexture &whiteTexture, GameContext &context) : _blackTexture(blackTexture), _whiteTexture(whiteTexture), _context(context)
{
}

Tile* TileFactory::Create(bool isBlack, int height, int width, float horizontalOffset, float verticalOffset) {

	auto result = isBlack ? new Tile(_blackTexture,height,width,horizontalOffset,verticalOffset, _context) : 
		new Tile(_whiteTexture, height, width, horizontalOffset, verticalOffset, _context);

	return result;
}

TileFactory::~TileFactory()
{
}
