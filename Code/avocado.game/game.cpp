#include <memory>
#include "Game.h"
#include "GameEntity.h"
#include <SFML/Graphics.hpp>


Game::Game(Board& board, GameContext& context) :_board(board), _context(context)
{
}

void Game::Run() {

	sf::RenderWindow window(sf::VideoMode(500, 500), "SFML works!");
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();

		auto x = (*_context.GetGameEntities()[0]).GetSprite();

		for (std::vector<GameEntity*>::iterator it = _context.GetGameEntities().begin(); it != _context.GetGameEntities().end(); ++it) {

			window.draw((*(*it)).GetSprite());
		};

		window.display();
	}
}

Game::~Game()
{
}
