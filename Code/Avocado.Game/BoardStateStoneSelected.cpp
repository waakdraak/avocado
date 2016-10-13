#include "BoardStateStoneSelected.h"
#include "MoveCommand.h"

BoardStateStoneSelected::BoardStateStoneSelected(std::vector<CommandBase> commandList, KingMoveAnimation moveAnimation) 
	: BoardStateBase(commandList), moveAnimation(moveAnimation)
{
}

void BoardStateStoneSelected::Select(Tile tile, StoneBase stone)
{
	MoveCommand moveCommand = MoveCommand(moveAnimation);

	CommandList.push_back(static_cast<CommandBase>(moveCommand));
	
	moveCommand.Execute(tile, stone);
}

BoardStateStoneSelected::~BoardStateStoneSelected()
{
}
