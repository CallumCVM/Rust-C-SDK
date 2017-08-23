#pragma once

#include "ItemDefinition.h"

namespace rust 
{
	class ItemModConditionHasContents : public ItemMod // 0x20
	{
	public:
		ItemDefinition* itemDef; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		bool requiredState; // 0x28 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x30
}
