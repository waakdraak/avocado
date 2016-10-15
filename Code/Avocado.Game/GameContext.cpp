#include "stdafx.h"
#include "GameContext.h"


GameContext::GameContext()
{
}


void GameContext::AddGameEntity(GameEntity* gameEntity) {
	_gameEntities.push_back(gameEntity);
}

std::vector<GameEntity*>& GameContext::GetGameEntities() {
	return _gameEntities;
}

GameContext::~GameContext()
{
}
