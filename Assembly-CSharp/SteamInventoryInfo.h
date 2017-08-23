#pragma once

#include "..\UnityEngine\GameObject.h"
#include "..\Rust\Workshop\Game\WorkshopInventoryCraftingControls.h"
#include "..\Facepunch\Steamworks\Inventory\Item.h"

namespace rust 
{
	class SteamInventoryInfo : public SingletonComponent`1 // 0x18
	{
	public:
		UnityEngine::GameObject* inventoryItemPrefab; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* inventoryCanvas; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* missingItems; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		Rust::Workshop::Game::WorkshopInventoryCraftingControls* CraftControl; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		Facepunch::Steamworks::Inventory::Item* PreviousItems; // 0x38 (size: 0x8, flags: 0x1, type: 0x1d)
		bool FirstUpdate; // 0x40 (size: 0x1, flags: 0x6, type: 0x2)
		float LastStackTime; // 0x44 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x48
}
