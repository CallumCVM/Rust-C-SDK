#pragma once

#include "T[,].h"

namespace rust 
{
template <typename T0>
	class TerrainMap2D : public TerrainMap // 0x38
	{
	public:
		T[,] src; // 0x38 (size: 0x8, flags: 0x3, type: 0x14)
		T[,] dst; // 0x40 (size: 0x8, flags: 0x3, type: 0x14)
	}; // size = 0x48
}
