#pragma once
#include "DrawableCollection.h"
#include <SFML/Graphics.hpp>

class GameContext
{
private: 
	DrawableCollection _drawableCollection;
public:
	GameContext(DrawableCollection& drawableCollection);

	DrawableCollection& GetDrawableCollection();

	~GameContext();
};

