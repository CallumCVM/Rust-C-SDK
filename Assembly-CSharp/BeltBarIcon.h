#pragma once

#include "ItemIcon.h"

namespace rust 
{
	class BeltBarIcon : public MonoBehaviour // 0x18
	{
	public:
		ItemIcon* itemIcon; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		bool wasSelected; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
