#include "stdafx.h"
#include "DrawableCollection.h"


DrawableCollection::DrawableCollection()
{
}

std::vector<sf::RectangleShape>& DrawableCollection::GetAll() {
	return _drawableCollection;
}

void DrawableCollection::AddDrawable(sf::RectangleShape& drawable) {
	_drawableCollection.push_back(drawable);
}

DrawableCollection::~DrawableCollection()
{
}
