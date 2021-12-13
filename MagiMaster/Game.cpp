#include "Game.h"
#include <conio.h>
#pragma warning(disable : 4996)

Game::Game() :
	nextInput{ ' ' }, playing{ true }, currentMap{ std::vector<char> {'0'},1 }
{
	currentMap = map.m_0_0;
}

void Game::Start()
{
	Gameloop();
}

void Game::Gameloop()
{
	while (playing)
	{
		/////////////////////BORDER TOP//////////////////////////////
		for (int i = 0; i < map.m_0_0.len + 1; i++) std::cout << "#";
		std::cout << std::endl << "#";
		////////////////////DRAWING SCENE////////////////////////////
		int current = 0;
		for (char& c : currentMap.map)
		{
			current++;
			if (current != player.position.asIndex(currentMap.len))
			{
				if (c == '|')
					std::cout << "#" << std::endl << "#";
				else if (c == '#')
					std::cout << " ";
				else
					std::cout << c;
			}
			else
			{
				std::cout << "0";
			}
		}
		///////////////////BORDER BOTTOM/////////////////////////////
		std::cout << "#" << std::endl;
		for (int i = 0; i < map.m_0_0.len + 1; i++) std::cout << "#";
		std::cout << std::endl;
		/////////////////////////////////////////////////////////////

		std::cout << "\nX: " << player.position.x << ", Y: " << player.position.y << "\n";
		std::cout << "\nIndex: " << player.position.asIndex(currentMap.len);
		while (!validInput) GetNextInput(); // get input
		validInput = false;

		//clear display
		system("CLS");
	}
}

void Game::GetNextInput()
{
	std::cin.clear();
	char input;
	input = getch();
	if (input == 'w' || input == 'W' ||
		input == 'a' || input == 'A' ||
		input == 's' || input == 'S' ||
		input == 'd' || input == 'D')
	{
		nextInput = input;
		validInput = true;
		if (input == 'W') input = 'w';
		if (input == 'A') input = 'a';
		if (input == 'S') input = 's';
		if (input == 'D') input = 'd';
		if (input == 'w') {
			player.position.y--;
			if (player.position.asIndex(currentMap.len) < 0
				|| currentMap.map[player.position.asIndex(currentMap.len)] == 'X') player.position.y++;
		}
		if (input == 'a') {
			player.position.x--;
			if (currentMap.map[player.position.asIndex(currentMap.len)] == '|'
				|| currentMap.map[player.position.asIndex(currentMap.len)] == 'X') player.position.x++;
		}
		if (input == 's') {
			player.position.y++;
			if (player.position.asIndex(currentMap.len) > currentMap.map.size()
				|| currentMap.map[player.position.asIndex(currentMap.len)] == 'X') player.position.y--;
		}
		if (input == 'd') {
			player.position.x++;
			if (currentMap.map[player.position.asIndex(currentMap.len)] == '|'
				|| currentMap.map[player.position.asIndex(currentMap.len)] == 'X') player.position.x--;
		}
	}
}
