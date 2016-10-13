#pragma once
#include "Tile.h"
#include "StoneBase.h"
#include "CommandBase.h"
#include <vector>

class BoardStateBase
{
protected:
	std::vector<CommandBase> CommandList;

public:
	BoardStateBase(std::vector<CommandBase> commandList);

	virtual void Select(Tile tile, StoneBase stone);
	~BoardStateBase();
};

