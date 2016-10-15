#include "stdafx.h"
#include "TileFactory.h"


TileFactory::TileFactory(GameTexture &blackTexture, GameTexture &whiteTexture, GameContext &context) : _blackTexture(blackTexture), _whiteTexture(whiteTexture), _context(context)
{
}

Tile* TileFactory::Create(bool isBlack, int height, int width, float horizontalOffset, float verticalOffset) {

	// tile gfx unique pointer or smart pointer

	auto result = isBlack ? new Tile(new TileGraphics(_blackTexture,height,width,horizontalOffset,verticalOffset)) : 
		new Tile(new TileGraphics(_whiteTexture, height, width, horizontalOffset, verticalOffset));

	auto drawable = result->GetGraphics().GetDrawable();

	_context.GetDrawableCollection().AddDrawable(drawable);

	return result;
}

TileFactory::~TileFactory()
{
}
