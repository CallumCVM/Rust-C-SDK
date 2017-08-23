#pragma once

#include "LootSpawn.h"
#include "GameObjectRef.h"

namespace rust 
{
	class ItemModUnwrap : public ItemMod // 0x20
	{
	public:
		LootSpawn* revealList; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* successEffect; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x30
}
