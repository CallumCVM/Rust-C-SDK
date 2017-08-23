#pragma once

#include "..\TerrainSplat\Enum.h"
#include "..\TerrainTopology\Enum.h"
#include "InfrastructureType.h"

namespace rust 
{
	class TerrainPathChildObjects : public MonoBehaviour // 0x18
	{
	public:
		bool Spline; // 0x18 (size: 0x1, flags: 0x6, type: 0x2)
		float Width; // 0x1c (size: 0x4, flags: 0x6, type: 0xc)
		float Offset; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
		float Padding; // 0x24 (size: 0x4, flags: 0x6, type: 0xc)
		float Fade; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
		TerrainSplat::Enum Splat; // 0x2c (size: 0x4, flags: 0x6, type: 0x11)
		TerrainTopology::Enum Topology; // 0x30 (size: 0x4, flags: 0x6, type: 0x11)
		InfrastructureType Type; // 0x34 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x38
}
