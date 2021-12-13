#ifndef PLAYER_H
#define PLAYER_H
#include <string>

struct Vector2
{
	Vector2(int t_x, int t_y) :
		x{t_x},y{t_y}
	{}
	int x = 0, y = 0;
	int asIndex(int t_len)
	{
		int X = x;
		X += y;
		return (X + t_len * y) + 1;
	}
};

class Player
{
public:
	std::string name = "player";
	Vector2 position{ 0,0 };
};

#endif

