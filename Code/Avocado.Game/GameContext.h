#pragma once
#include <vector>
#include "GameEntity.h"
#include <SFML/Graphics.hpp>

class GameContext
{
private: 
	std::vector<GameEntity*> _gameEntities;

public:
	GameContext();

	void AddGameEntity(GameEntity* gameEntity);

	std::vector<GameEntity*>& GetGameEntities();

	~GameContext();
};

