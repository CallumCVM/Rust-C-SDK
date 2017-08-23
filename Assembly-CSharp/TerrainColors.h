#pragma once

#include "TerrainSplatMap.h"
#include "TerrainBiomeMap.h"

namespace rust 
{
	class TerrainColors : public TerrainExtension // 0x30
	{
	public:
		TerrainSplatMap* splatMap; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		TerrainBiomeMap* biomeMap; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x40
}
