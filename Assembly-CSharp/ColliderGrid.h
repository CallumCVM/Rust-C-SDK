#pragma once

namespace rust 
{
	class ColliderGrid : public SingletonComponent`1 // 0x18
	{
	public:
		float CellSize; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
		float MaxMilliseconds; // 0x1c (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x20
}
