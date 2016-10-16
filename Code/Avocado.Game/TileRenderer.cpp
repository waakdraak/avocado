
#include "TileRenderer.h"


TileRenderer::TileRenderer(TileFactory tileFactory, int boardHeight, int boardWidth): _tileFactory(tileFactory),_tileHeight(boardHeight / 8), _tileWidth(boardWidth / 8)
{
}

//mag deze destoryed worden?
std::vector< std::vector<Tile*> >* TileRenderer::RenderTiles() {
	auto horizontalOffset = 0;
	auto verticalOffset = 0;

	std::vector< std::vector<Tile*> >* tileCollection = new std::vector< std::vector<Tile*> >;

	for (int vertical = 0; vertical< 8; vertical++) {

		auto isBlack = false;

		tileCollection->push_back(std::vector<Tile*>());

		for (int horizontal = 0; horizontal< 8; horizontal++) {

			(*tileCollection)[vertical].push_back(_tileFactory.Create(isBlack, 
				static_cast<float>(_tileHeight), 
				static_cast<float>(_tileWidth),
				static_cast<float>(horizontal) * _tileWidth, 
				static_cast<float>(_tileHeight) * vertical));
			isBlack = true;

		}
		isBlack = !isBlack;
	}

	return tileCollection;
}

TileRenderer::~TileRenderer()
{
	//clean up tile collection
}
