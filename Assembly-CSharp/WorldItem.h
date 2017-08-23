#pragma once

#include "Item.h"

namespace rust 
{
	class WorldItem : public BaseEntity // 0x130
	{
	public:
		Item* item; // 0x130 (size: 0x8, flags: 0x86, type: 0x12)
		bool allowPickup; // 0x138 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x140
}
