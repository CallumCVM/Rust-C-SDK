#pragma once

#include "ItemIcon.h"

namespace rust 
{
	class ItemPanel : public SingletonComponent`1 // 0x18
	{
	public:
		ItemIcon* item; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
