#pragma once

namespace rust 
{
	class TimedUnlootableCrate : public LootContainer // 0x318
	{
	public:
		bool unlootableOnSpawn; // 0x318 (size: 0x1, flags: 0x6, type: 0x2)
		float unlootableDuration; // 0x31c (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x320
}
