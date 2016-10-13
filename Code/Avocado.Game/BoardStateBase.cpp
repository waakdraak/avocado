#include "BoardStateBase.h"


BoardStateBase::BoardStateBase(std::vector<CommandBase> commandList): CommandList(commandList)
{

}

void BoardStateBase::Select(Tile tile, StoneBase stone)
{
}

BoardStateBase::~BoardStateBase()
{
}
