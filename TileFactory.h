#pragma once
#include "Tiles.h"

class TileFactory
{
	public:
		Tiles* getTile(string type)
		{
			if (type == "NORMAL")
			{
				return new NormalTile();
			}
			else if (type == "Rocket")
			{
				return new Rocket();
			}
			else if (type == "TNT")
			{
				return new TNT();
			}
			else if (type == "Rubick")
			{
				return new RubickTile();
			}
		}
};

