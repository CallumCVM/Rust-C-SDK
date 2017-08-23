#pragma once

#include "TerrainConfig.h"

namespace rust 
{
	class TerrainGenerator : public SingletonComponent`1 // 0x18
	{
	public:
		TerrainConfig* config; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		unsigned int EditorSize; // 0x20 (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0x28
}
