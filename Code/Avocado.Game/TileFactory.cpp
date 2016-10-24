#include "TileFactory.h"


TileFactory::TileFactory(GameTexture &blackTexture, GameTexture &whiteTexture, GameContext &context) : _blackTexture(blackTexture), _whiteTexture(whiteTexture), _context(context)
{
}

std::shared_ptr<Tile> TileFactory::Create(bool isBlack, float height, float width, float horizontalOffset, float verticalOffset) {

	auto result = isBlack ? std::shared_ptr<Tile>(new Tile(_blackTexture,height,width,horizontalOffset,verticalOffset, _context)) : 
		std::shared_ptr<Tile>(new Tile(_whiteTexture, height, width, horizontalOffset, verticalOffset, _context));

	return result;
}

TileFactory::~TileFactory()
{
}
