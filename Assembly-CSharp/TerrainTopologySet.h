#pragma once

#include "..\TerrainTopology\Enum.h"

namespace rust 
{
	class TerrainTopologySet : public TerrainModifier // 0xa8
	{
	public:
		TerrainTopology::Enum TopologyType; // 0xa8 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0xb0
}
