#include "Game.h"
#include "TileRenderer.h"
#include "GameTexture.h"
#include "Board.h"

int main()
{
	GameTexture blackTexture;
	GameTexture whiteTexture;
	TileFactory tileFactory = TileFactory(blackTexture, whiteTexture);
	TileRenderer tileRenderer(tileFactory, 200, 200);
	Board board(tileRenderer);
	Game game(board);

	game.Run();

	return 0;
}

