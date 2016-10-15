#pragma once
#include <vector>
#include <SFML/Graphics.hpp>

class DrawableCollection
{
private:
	std::vector<sf::RectangleShape> _drawableCollection;

public:
	DrawableCollection();
	std::vector<sf::RectangleShape> GetAll();
	void AddDrawable(sf::RectangleShape& drawable);
	~DrawableCollection();
};

