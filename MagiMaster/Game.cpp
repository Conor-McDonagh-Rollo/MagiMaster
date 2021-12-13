#include "Game.h"

Game::Game() :
	nextInput{ ' ' }, playing{ true }
{
	currentMap = map.m_0_0.map;
}

void Game::Start()
{
	Gameloop();
}

void Game::Gameloop()
{
	while (playing)
	{
		for (char& c : currentMap)
		{
			if (c == '|') std::cout << std::endl << "#";
			if (c == '#') std::cout << " ";
			else std::cout << c;
		}

		std::cin.get();

		//clear display
		system("CLS");
	}
}

void Game::GetNextInput()
{
}
