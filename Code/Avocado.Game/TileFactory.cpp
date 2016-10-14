#include "stdafx.h"
#include "TileFactory.h"


TileFactory::TileFactory(GameTexture &blackTexture, GameTexture &whiteTexture): _blackTexture(blackTexture), _whiteTexture(whiteTexture)
{
}

Tile TileFactory::Create(bool isBlack, int height, int width, int horizontalOffset, int verticalOffset) {

	auto result = isBlack ? Tile(TileGraphics(_blackTexture,height,width,horizontalOffset,verticalOffset)) : 
		Tile(TileGraphics(_whiteTexture, height, width, horizontalOffset, verticalOffset));

	return result;
}

TileFactory::~TileFactory()
{
}
