#pragma once

namespace rust 
{
	class TerrainModifier : public PrefabAttribute // 0x98
	{
	public:
		float Opacity; // 0x98 (size: 0x4, flags: 0x6, type: 0xc)
		float Radius; // 0x9c (size: 0x4, flags: 0x6, type: 0xc)
		float Fade; // 0xa0 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0xa8
}
