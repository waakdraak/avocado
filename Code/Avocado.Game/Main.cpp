#include "Game.h"
#include "Board.h"

int main()
{
	Board board;
	Game game(board);

	game.Run();

	return 0;
}

