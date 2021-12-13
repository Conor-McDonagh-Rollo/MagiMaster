#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <vector>
#include "Mappings.h"

class Game
{
	char nextInput;
	std::vector<char> currentMap;

	bool playing;

	Mappings map;
public:
	Game();
	void Start();
	void Gameloop();
	void GetNextInput();
};

#endif
