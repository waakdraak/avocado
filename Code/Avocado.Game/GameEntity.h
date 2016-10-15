#pragma once
#include <SFML/Graphics.hpp>

class GameEntity
{
public:
	GameEntity();

	virtual sf::RectangleShape& GetSprite();

	~GameEntity();
};

