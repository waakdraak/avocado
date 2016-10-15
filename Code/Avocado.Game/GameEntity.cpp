
#include "GameEntity.h"


GameEntity::GameEntity()
{
}

sf::RectangleShape& GameEntity::GetSprite() {
	return sf::RectangleShape(sf::Vector2f(10,10));
};

GameEntity::~GameEntity()
{
}
