#pragma once

#include "..\ItemContainer\Flag.h"

namespace rust 
{
	class ItemModConditionContainerFlag : public ItemMod // 0x20
	{
	public:
		ItemContainer::Flag flag; // 0x20 (size: 0x4, flags: 0x6, type: 0x11)
		bool requiredState; // 0x24 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x28
}
