#include "board.h"

Board::Board() 
{

}

Tile Board::GetTile(int x, int y) {
	return Tile();
}

void Board::Select(int x, int y) {

	auto selectedTile = GetTile(x, y);
	auto selectedStone = selectedTile.GetStone();

	_boardState.Select(selectedTile, selectedStone);
}

Board::~Board()
{
}
