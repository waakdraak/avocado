#include "Game.h"
#include "TileRenderer.h"
#include "GameTexture.h"
#include "GameContext.h"
#include "Board.h"

int main()
{
	
	GameContext context;
	GameTexture blackTexture;
	GameTexture whiteTexture;
	TileFactory tileFactory = TileFactory(blackTexture, whiteTexture, context);
	Board board(tileFactory,500,500);
	Game game(board, context);

	game.Run();

	return 0;
}

