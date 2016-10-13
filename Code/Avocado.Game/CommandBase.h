#pragma once
#include "StoneBase.h"
#include "Tile.h"
class CommandBase
{
public:
	CommandBase();

	virtual void Execute(Tile tile, StoneBase stone);

	~CommandBase();
};

