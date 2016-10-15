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
	TileFactory* tileFactory = new TileFactory(blackTexture, whiteTexture, context);
	TileRenderer tileRenderer(*tileFactory, 200, 200);
	Board board(tileRenderer);
	Game game(board, context);

	game.Run();

	return 0;
}

