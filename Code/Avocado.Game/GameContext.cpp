#include "stdafx.h"
#include "GameContext.h"


GameContext::GameContext(DrawableCollection& drawableCollection) : _drawableCollection(drawableCollection)
{
}

DrawableCollection& GameContext::GetDrawableCollection() {
	return _drawableCollection;
}

GameContext::~GameContext()
{
}
