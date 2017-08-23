#pragma once

#include "SpawnFilter.h"

namespace rust 
{
	class TerrainFilter : public PrefabAttribute // 0x98
	{
	public:
		SpawnFilter* Filter; // 0x98 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0xa0
}
