#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\Translate\Phrase.h"
#include "..\UnityEngine\Sprite.h"
#include "ItemCategory.h"
#include "ItemSelectionPanel.h"
#include "..\ItemContainer\ContentsType.h"
#include "ItemSlot.h"
#include "..\Rust\Rarity.h"
#include "SoundDefinition.h"
#include "SteamInventoryItem.h"
#include "ItemDefinition.h"
#include "GameObjectRef.h"
#include "ItemMod.h"
#include "..\BaseEntity\TraitFlag.h"
#include "..\ItemSkinDirectory\Skin.h"
#include "..\Facepunch\Steamworks\Inventory\Definition.h"
#include "..\UnityEngine\GameObject.h"

namespace rust 
{
	class ItemDefinition : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UnicodeString* shortname; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		Translate::Phrase* displayName; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		Translate::Phrase* displayDescription; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Sprite* iconSprite; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		SoundDefinition* inventorySelectSound; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		SoundDefinition* inventoryGrabSound; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		SoundDefinition* inventoryDropSound; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		SoundDefinition* physImpactSoundDef; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
		Condition condition; // 0x58 (size: 0x18, flags: 0x6, type: 0x11)
		SteamInventoryItem* steamItem; // 0x70 (size: 0x8, flags: 0x6, type: 0x12)
		ItemDefinition* Parent; // 0x78 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* worldModelPrefab; // 0x80 (size: 0x8, flags: 0x6, type: 0x12)
		ItemMod* itemMods; // 0x88 (size: 0x8, flags: 0x86, type: 0x1d)
		ItemSkinDirectory::Skin* skins; // 0x90 (size: 0x8, flags: 0x86, type: 0x1d)
		Facepunch::Steamworks::Inventory::Definition* _skins2; // 0x98 (size: 0x8, flags: 0x81, type: 0x1d)
		UnityEngine::GameObject* panel; // 0xa0 (size: 0x8, flags: 0x6, type: 0x12)
		ItemDefinition* Children; // 0xa8 (size: 0x8, flags: 0x86, type: 0x1d)
		int itemid; // 0xb0 (size: 0x4, flags: 0x6, type: 0x8)
		ItemCategory category; // 0xb4 (size: 0x4, flags: 0x6, type: 0x11)
		ItemSelectionPanel selectionPanel; // 0xb8 (size: 0x4, flags: 0x6, type: 0x11)
		int maxDraggable; // 0xbc (size: 0x4, flags: 0x6, type: 0x8)
		ItemContainer::ContentsType itemType; // 0xc0 (size: 0x4, flags: 0x6, type: 0x11)
		AmountType amountType; // 0xc4 (size: 0x4, flags: 0x6, type: 0x11)
		ItemSlot occupySlots; // 0xc8 (size: 0x4, flags: 0x6, type: 0x11)
		int stackable; // 0xcc (size: 0x4, flags: 0x6, type: 0x8)
		Rust::Rarity rarity; // 0xd0 (size: 0x4, flags: 0x6, type: 0x11)
		bool hidden; // 0xd4 (size: 0x1, flags: 0x6, type: 0x2)
		Flag flags; // 0xd8 (size: 0x4, flags: 0x6, type: 0x11)
		BaseEntity::TraitFlag Traits; // 0xdc (size: 0x4, flags: 0x6, type: 0x11)
		bool <isWearable>k__BackingField; // 0xe0 (size: 0x1, flags: 0x1, type: 0x2)
		bool <isHoldable>k__BackingField; // 0xe1 (size: 0x1, flags: 0x1, type: 0x2)
		bool <isUsable>k__BackingField; // 0xe2 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0xe8
}
