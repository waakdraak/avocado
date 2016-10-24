#pragma once
#include <memory>
#include <SFML/Graphics.hpp>

class GameEntity
{
public:
	GameEntity();

	virtual sf::RectangleShape GetSprite() = 0;

	~GameEntity();
};

