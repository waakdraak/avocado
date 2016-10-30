#include "stdafx.h"
#include "BoardStateReady.h"

BoardStateReady::BoardStateReady(std::vector<CommandBase> commandList) : BoardStateBase(commandList)
{
}

void BoardStateReady::Select(Tile tile, StoneBase stone)
{
}

BoardStateReady::~BoardStateReady()
{
}
