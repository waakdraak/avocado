#pragma once
#include <SFML/Graphics.hpp>

class GameContext
{
private: 
	sf::RenderWindow _window;
public:
	GameContext(sf::RenderWindow window);
	~GameContext();
};

