#include "board.h"

//

Board::Board(TileRenderer &tileRenderer) : _tileCollection(tileRenderer.RenderTiles())
{

}

Tile Board::GetTile(int x, int y) {
	return *(*_tileCollection)[1][1];
}

void Board::Select(int x, int y) {

	auto selectedTile = GetTile(x, y);
	//_boardState.Select(selectedTile, selectedStone);
}

Board::~Board()
{
}
