#pragma once

#include "ItemDefinition.h"

namespace rust 
{
	class ItemAmount : public Object // 0x0
	{
	public:
		ItemDefinition* itemDef; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		float amount; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
		float startAmount; // 0x1c (size: 0x4, flags: 0x86, type: 0xc)
	}; // size = 0x20
}
