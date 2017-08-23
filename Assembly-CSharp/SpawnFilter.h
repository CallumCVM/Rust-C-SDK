#pragma once

#include "..\TerrainSplat\Enum.h"
#include "..\TerrainBiome\Enum.h"
#include "..\TerrainTopology\Enum.h"

namespace rust 
{
	class SpawnFilter : public Object // 0x0
	{
	public:
		TerrainSplat::Enum SplatType; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
		TerrainBiome::Enum BiomeType; // 0x14 (size: 0x4, flags: 0x6, type: 0x11)
		TerrainTopology::Enum TopologyAny; // 0x18 (size: 0x4, flags: 0x6, type: 0x11)
		TerrainTopology::Enum TopologyAll; // 0x1c (size: 0x4, flags: 0x6, type: 0x11)
		TerrainTopology::Enum TopologyNot; // 0x20 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x28
}
