#pragma once

#include "..\UnityEngine\List.h"

namespace rust 
{
	class ResourceDispenser : public EntityComponent`1 // 0x20
	{
	public:
		UnityEngine::List<ItemAmount>* containedItems; // 0x20 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<ItemAmount>* finishBonus; // 0x28 (size: 0x8, flags: 0x6, type: 0x15)
		GatherType gatherType; // 0x30 (size: 0x4, flags: 0x6, type: 0x11)
		float fractionRemaining; // 0x34 (size: 0x4, flags: 0x6, type: 0xc)
		float categoriesRemaining; // 0x38 (size: 0x4, flags: 0x1, type: 0xc)
		float startingItemCounts; // 0x3c (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x40
}
