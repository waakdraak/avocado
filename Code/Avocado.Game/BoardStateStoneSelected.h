#pragma once
#include <vector>
#include "KingMoveAnimation.h"
#include "BoardStateBase.h"
#include "Tile.h"
#include "CommandBase.h"

class BoardStateStoneSelected : BoardStateBase
{

private : 
	KingMoveAnimation moveAnimation;

public:
	BoardStateStoneSelected(std::vector<CommandBase> commandList, KingMoveAnimation moveAnimation);
	void Select(Tile tile, StoneBase stone);
	~BoardStateStoneSelected();
};

