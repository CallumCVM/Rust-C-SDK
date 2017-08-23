#pragma once

#include "..\PathFinder\Point.h"

namespace rust 
{
	class PathFinder : public Object // 0x0
	{
	public:
		int[,] costmap; // 0x10 (size: 0x8, flags: 0x1, type: 0x14)
		bool[,] visited; // 0x18 (size: 0x8, flags: 0x1, type: 0x14)
		PathFinder::Point* neighbors; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x28
}
