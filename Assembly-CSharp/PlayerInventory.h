#pragma once

#include "ItemContainer.h"
#include "ItemCrafter.h"
#include "PlayerLoot.h"

namespace rust 
{
	class PlayerInventory : public EntityComponent`1 // 0x20
	{
	public:
		ItemContainer* containerMain; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		ItemContainer* containerBelt; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		ItemContainer* containerWear; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		ItemCrafter* crafting; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		PlayerLoot* loot; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x48
}
