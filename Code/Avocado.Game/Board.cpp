#include "stdafx.h"
#include "board.h"

Board::Board(TileFactory tileFactory, float boardHeight, float boardWidth) : 
	_tileFactory(tileFactory), _tileHeight(boardHeight / 8), _tileWidth(boardWidth / 8), 
	_tileCollection(std::vector< std::vector<std::shared_ptr<Tile> > >()),
	_boardHeight(boardHeight), _boardWidth(boardWidth)
{
	RenderTiles();
}

void Board::RenderTiles() {
	auto horizontalOffset = 0;
	auto verticalOffset = 0;

	for (int vertical = 0; vertical< 8; vertical++) {

		auto isBlack = false;

		_tileCollection.push_back(std::vector<std::shared_ptr<Tile> >());

		for (int horizontal = 0; horizontal< 8; horizontal++) {

			_tileCollection[vertical].push_back(_tileFactory.Create(isBlack,
				_tileHeight,
				_tileWidth,
				_tileWidth * horizontal,
				_tileHeight * vertical));
			isBlack = true;

		}
		isBlack = !isBlack;
	}
}

Tile Board::GetTile(int x, int y) {
	return *_tileCollection[1][1];
}

void Board::Select(int x, int y) {

	auto selectedTile = GetTile(x, y);
	//_boardState.Select(selectedTile, selectedStone);
}

Board::~Board()
{
}
