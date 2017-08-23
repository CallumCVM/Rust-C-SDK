#pragma once

#include "ItemDefinition.h"
#include "GameObjectRef.h"

namespace rust 
{
	class ItemModUpgrade : public ItemMod // 0x20
	{
	public:
		ItemDefinition* upgradedItem; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* successEffect; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* failEffect; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		int numForUpgrade; // 0x38 (size: 0x4, flags: 0x6, type: 0x8)
		float upgradeSuccessChance; // 0x3c (size: 0x4, flags: 0x6, type: 0xc)
		int numToLoseOnFail; // 0x40 (size: 0x4, flags: 0x6, type: 0x8)
		int numUpgradedItem; // 0x44 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x48
}
