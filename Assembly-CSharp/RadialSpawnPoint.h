#pragma once

namespace rust 
{
	class RadialSpawnPoint : public BaseSpawnPoint // 0x18
	{
	public:
		float radius; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x20
}
