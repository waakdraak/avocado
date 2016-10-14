
#include "TileRenderer.h"


TileRenderer::TileRenderer(TileFactory tileFactory, int boardHeight, int boardWidth): _tileFactory(tileFactory),_tileHeight(boardHeight / 8), _tileWidth(boardWidth / 8)
{
}

std::vector< std::vector<Tile> > TileRenderer::RenderTiles() {
	auto horizontalOffset = 0;
	auto verticalOffset = 0;

	std::vector< std::vector<Tile> > tileCollection;

	for (int vertical = 0; vertical< 8; vertical++) {

		auto isBlack = false;
		tileCollection.push_back(std::vector<Tile>());

		for (int horizontal = 0; horizontal< 8; horizontal++) {

			tileCollection[vertical].push_back(_tileFactory.Create(isBlack, _tileHeight, _tileWidth, (horizontal + 1) * _tileWidth, (_tileHeight + 1) * vertical));
			isBlack = true;

		}
		isBlack = !isBlack;
	}

	return tileCollection;
}

TileRenderer::~TileRenderer()
{
}
