#pragma once

#include "ItemMod.h"

namespace rust 
{
	class ItemModCycle : public ItemMod // 0x20
	{
	public:
		ItemMod* actions; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
		float timeBetweenCycles; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
		float timerStart; // 0x2c (size: 0x4, flags: 0x6, type: 0xc)
		bool onlyAdvanceTimerWhenPass; // 0x30 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x38
}
