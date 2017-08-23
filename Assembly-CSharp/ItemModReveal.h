#pragma once

#include "ItemDefinition.h"
#include "LootSpawn.h"
#include "GameObjectRef.h"

namespace rust 
{
	class ItemModReveal : public ItemMod // 0x20
	{
	public:
		ItemDefinition* revealedItemOverride; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		LootSpawn* revealList; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* successEffect; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		int numForReveal; // 0x38 (size: 0x4, flags: 0x6, type: 0x8)
		int revealedItemAmount; // 0x3c (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x40
}
