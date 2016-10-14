#include "tile.h"

Tile::Tile(TileGraphics tileGraphics) : _tileGraphics(tileGraphics)
{
}

TileGraphics Tile::GetGraphics() {
	return _tileGraphics;
}

void Tile::SetStone(StoneBase stone) {
}

StoneBase Tile::GetStone() {
	return StoneBase();
}

Tile::~Tile()
{
}
