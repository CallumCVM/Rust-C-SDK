#pragma once

namespace rust 
{
	class TerrainMap : public TerrainExtension // 0x30
	{
	public:
		int res; // 0x30 (size: 0x4, flags: 0x3, type: 0x8)
	}; // size = 0x38
}
