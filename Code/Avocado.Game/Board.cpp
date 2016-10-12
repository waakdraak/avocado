#include "board.h"

Board::Board() 
{

}

Tile Board::GetTile(int x, int y) {
	return Tile(1,1,1,1);
}

void Board::Select(int x, int y) {
	_boardState.Select();
}

Board::~Board()
{
}
