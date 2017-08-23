#pragma once

#include "ItemDefinition.h"

namespace rust 
{
	class ItemModCookable : public ItemMod // 0x20
	{
	public:
		ItemDefinition* becomeOnCooked; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		float cookTime; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
		int amountOfBecome; // 0x2c (size: 0x4, flags: 0x6, type: 0x8)
		int lowTemp; // 0x30 (size: 0x4, flags: 0x6, type: 0x8)
		int highTemp; // 0x34 (size: 0x4, flags: 0x6, type: 0x8)
		bool setCookingFlag; // 0x38 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x40
}
