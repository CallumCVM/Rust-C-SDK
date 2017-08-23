#pragma once

#include "..\Item\Flag.h"

namespace rust 
{
	class ItemModConditionHasFlag : public ItemMod // 0x20
	{
	public:
		Item::Flag flag; // 0x20 (size: 0x4, flags: 0x6, type: 0x11)
		bool requiredState; // 0x24 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x28
}
