#include "Game.h"
#include "TileRenderer.h"
#include "DrawableCollection.h"
#include "GameTexture.h"
#include "GameContext.h"
#include "Board.h"

int main()
{
	
	DrawableCollection drawableCollection;
	GameContext context(drawableCollection);
	GameTexture blackTexture;
	GameTexture whiteTexture;
	TileFactory tileFactory = TileFactory(blackTexture, whiteTexture, context);
	TileRenderer tileRenderer(tileFactory, 200, 200);
	Board board(tileRenderer);
	Game game(board, context);

	game.Run();

	return 0;
}

