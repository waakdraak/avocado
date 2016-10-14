#pragma once
#include "TileGraphicsBase.h"
#include "GameTexture.h"

class TileGraphics : public TileGraphicsBase
{
public:
	TileGraphics(GameTexture &tileTexture, int height, int width, int horizontalOffset, int verticalOffset);

	void SetOrigin();

	~TileGraphics();
};

