#pragma once

#include "Item.h"

namespace rust 
{
	class DragInfo : public Object // 0x0
	{
	public:
		Item* item; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		int amount; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
		bool canDrop; // 0x1c (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x20
}
