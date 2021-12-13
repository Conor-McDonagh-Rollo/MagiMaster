#ifndef MAPPINGS_H
#define MAPPINGS_H
#include <vector>

class Map
{
public:
	Map(std::vector<char> t_map, int t_len) :
		map{t_map}, len{t_len}
	{

	}

	std::vector<char> map;
	int len;
};

class Mappings
{
public:
	Map m_0_0{ std::vector<char>{
		'#','#','#','#','#','#','#','#','#','#','|',
		'#','#','#','#','#','#','#','#','#','#','|',
		'#','#','#','#','#','#','#','#','#','#','|',
		'#','#','#','#','#','#','#','#','#','#','|',
		'#','#','#','#','#','#','#','#','#','#','|',
		'#','#','#','#','#','#','#','#','#','#'}, 10
	};
};

#endif
