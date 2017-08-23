#pragma once

#include "LootSpawn.h"

namespace rust 
{
	class LootContainer : public StorageContainer // 0x2e8
	{
	public:
		LootSpawn* lootDefinition; // 0x2e8 (size: 0x8, flags: 0x6, type: 0x12)
		bool destroyOnEmpty; // 0x2f0 (size: 0x1, flags: 0x6, type: 0x2)
		int maxDefinitionsToSpawn; // 0x2f4 (size: 0x4, flags: 0x6, type: 0x8)
		float minSecondsBetweenRefresh; // 0x2f8 (size: 0x4, flags: 0x6, type: 0xc)
		float maxSecondsBetweenRefresh; // 0x2fc (size: 0x4, flags: 0x6, type: 0xc)
		bool initialLootSpawn; // 0x300 (size: 0x1, flags: 0x6, type: 0x2)
		float xpLootedScale; // 0x304 (size: 0x4, flags: 0x6, type: 0xc)
		float xpDestroyedScale; // 0x308 (size: 0x4, flags: 0x6, type: 0xc)
		bool BlockPlayerItemInput; // 0x30c (size: 0x1, flags: 0x6, type: 0x2)
		int scrapAmount; // 0x310 (size: 0x4, flags: 0x6, type: 0x8)
		spawnType SpawnType; // 0x314 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x318
}
