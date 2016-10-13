#pragma once

#include "CommandBase.h"
#include "BoardStateBase.h"
#include "Tile.h"


class BoardStateReady : BoardStateBase
{
public:
	BoardStateReady(std::vector<CommandBase> commandList);
	void Select(Tile tile, StoneBase stone);
	~BoardStateReady();
};

