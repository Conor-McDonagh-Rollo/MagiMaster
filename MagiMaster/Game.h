#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <vector>
#include "Mappings.h"
#include "Player.h"

class Game
{
	char nextInput;

	bool playing;
	bool validInput = false;

	Mappings map;
	Map currentMap;
	Player player;
public:
	Game();
	void Start();
	void Gameloop();
	void GetNextInput();
};

#endif
