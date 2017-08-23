#pragma once

#include "ItemAmountRanged.h"
#include "..\LootSpawn\Entry.h"

namespace rust 
{
	class LootSpawn : public ScriptableObject // 0x18
	{
	public:
		ItemAmountRanged* items; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		LootSpawn::Entry* subSpawn; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x28
}
