#pragma once

#include "..\TerrainSplat\Enum.h"

namespace rust 
{
	class TerrainSplatSet : public TerrainModifier // 0xa8
	{
	public:
		TerrainSplat::Enum SplatType; // 0xa8 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0xb0
}
