#include "stdafx.h"
#include "CppUnitTest.h"
#include "../avocado.game/GameTexture.h"
#include "../avocado.game/Board.h"
#include "../avocado.game/GameContext.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace AvocadoGameTests
{		
	TEST_CLASS(WhenGeneratingTiles)
	{
	private:
		Board _board();
		GameContext _context;

	public:
		
		TEST_METHOD_INITIALIZE(GivenABoard) {
			GameTexture blackTexture;
		}
		
		TEST_METHOD(TestMethod1)
		{
		}
	};
}