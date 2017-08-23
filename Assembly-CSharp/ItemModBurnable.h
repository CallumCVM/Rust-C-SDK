#pragma once

#include "ItemDefinition.h"

namespace rust 
{
	class ItemModBurnable : public ItemMod // 0x20
	{
	public:
		ItemDefinition* byproductItem; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		float fuelAmount; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
		int byproductAmount; // 0x2c (size: 0x4, flags: 0x6, type: 0x8)
		float byproductChance; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x38
}
