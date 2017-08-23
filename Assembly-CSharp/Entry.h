#pragma once

#include "LootSpawn.h"

namespace rust 
{
	class Entry : public ValueType // 0x0
	{
	public:
		LootSpawn* category; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		int weight; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x20
}
