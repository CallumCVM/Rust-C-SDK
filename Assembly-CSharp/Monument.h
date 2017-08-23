#pragma once

namespace rust 
{
	class Monument : public TerrainPlacement // 0x110
	{
	public:
		float Radius; // 0x110 (size: 0x4, flags: 0x6, type: 0xc)
		float Fade; // 0x114 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x118
}
