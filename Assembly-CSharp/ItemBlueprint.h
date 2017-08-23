#pragma once

#include "..\UnityEngine\List.h"
#include "..\Rust\Rarity.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class ItemBlueprint : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::List<ItemAmount>* ingredients; // 0x18 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::UnicodeString* UnlockAchievment; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		bool userCraftable; // 0x28 (size: 0x1, flags: 0x6, type: 0x2)
		bool isResearchable; // 0x29 (size: 0x1, flags: 0x6, type: 0x2)
		Rust::Rarity rarity; // 0x2c (size: 0x4, flags: 0x6, type: 0x11)
		int scrapRequired; // 0x30 (size: 0x4, flags: 0x6, type: 0x8)
		int scrapFromRecycle; // 0x34 (size: 0x4, flags: 0x6, type: 0x8)
		bool NeedsSteamItem; // 0x38 (size: 0x1, flags: 0x6, type: 0x2)
		int blueprintStackSize; // 0x3c (size: 0x4, flags: 0x6, type: 0x8)
		float time; // 0x40 (size: 0x4, flags: 0x6, type: 0xc)
		int amountToCreate; // 0x44 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x48
}
