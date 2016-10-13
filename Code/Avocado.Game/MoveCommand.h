#pragma once

#include "CommandBase.h"
#include "KingMoveAnimation.h"
#include "StoneBase.h"
#include "Tile.h"

class MoveCommand : public CommandBase
{
	 
public:
	MoveCommand(KingMoveAnimation kingMoveAnimation);

	void MoveCommand::Execute(Tile tile, StoneBase stone);

	~MoveCommand();
};

