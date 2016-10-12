#pragma once

#include "CommandBase.h"
#include "KingMoveAnimation.h"

class KingMoveCommand : CommandBase
{
public:
	KingMoveCommand(KingMoveAnimation kingMoveAnimation);

	void KingMoveCommand::Execute();

	~KingMoveCommand();
};

