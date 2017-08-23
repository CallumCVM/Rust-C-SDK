#pragma once

namespace rust 
{
	class TerrainHeightAdd : public TerrainModifier // 0xa8
	{
	public:
		float Delta; // 0xa8 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0xb0
}
