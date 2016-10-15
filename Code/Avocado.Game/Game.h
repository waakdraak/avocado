#pragma once

#include "GameContext.h"
#include "Board.h"

class Game
{
private:
	Board& _board;
	GameContext& _context;

public:
	Game(Board& board, GameContext& context);

	void Run();

	~Game();
};

