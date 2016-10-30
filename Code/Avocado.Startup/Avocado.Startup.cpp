// Avocado.Startup.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "../avocado.game/Game.h"


int main()
{
	GameContext context;
	GameTexture blackTexture;
	GameTexture whiteTexture;
	TileFactory tileFactory = TileFactory(blackTexture, whiteTexture, context);
	Board board(tileFactory, 500, 500);
	Game game(board, context);

	game.Run();

	return 0;
}

