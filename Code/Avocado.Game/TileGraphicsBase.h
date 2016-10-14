#pragma once

#include "GameTexture.h"

class TileGraphicsBase
{
public:
	TileGraphicsBase(GameTexture &gameTexture);
	
	virtual void SetOrigin();


	~TileGraphicsBase();
};

