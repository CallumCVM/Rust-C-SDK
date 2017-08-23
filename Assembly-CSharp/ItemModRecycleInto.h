#pragma once

#include "ItemDefinition.h"
#include "GameObjectRef.h"

namespace rust 
{
	class ItemModRecycleInto : public ItemMod // 0x20
	{
	public:
		ItemDefinition* recycleIntoItem; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* successEffect; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		int numRecycledItemMin; // 0x30 (size: 0x4, flags: 0x6, type: 0x8)
		int numRecycledItemMax; // 0x34 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x38
}
