#pragma once

#include "ItemDefinition.h"

namespace rust 
{
	class BaitType : public Object // 0x0
	{
	public:
		ItemDefinition* bait; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		float successRate; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
		int minForInterest; // 0x1c (size: 0x4, flags: 0x6, type: 0x8)
		int maxToConsume; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x28
}
