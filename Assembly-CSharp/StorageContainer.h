#pragma once

#include "..\GameMenu\Option.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\ItemContainer\ContentsType.h"
#include "ItemDefinition.h"
#include "..\UnityEngine\Vector3.h"
#include "ItemCategory.h"

namespace rust 
{
	class StorageContainer : public DecayEntity // 0x1f0
	{
	public:
		GameMenu::Option __menuOption_Menu_OnFire; // 0x1f0 (size: 0x58, flags: 0x1, type: 0x11)
		GameMenu::Option __menuOption_Menu_Open; // 0x248 (size: 0x58, flags: 0x1, type: 0x11)
		UnityEngine::UnicodeString* panelName; // 0x2a0 (size: 0x8, flags: 0x6, type: 0xe)
		ItemDefinition* allowedItem; // 0x2a8 (size: 0x8, flags: 0x6, type: 0x12)
		int inventorySlots; // 0x2b0 (size: 0x4, flags: 0x6, type: 0x8)
		float dropChance; // 0x2b4 (size: 0x4, flags: 0x6, type: 0xc)
		bool isLootable; // 0x2b8 (size: 0x1, flags: 0x6, type: 0x2)
		bool isLockable; // 0x2b9 (size: 0x1, flags: 0x6, type: 0x2)
		ItemContainer::ContentsType allowedContents; // 0x2bc (size: 0x4, flags: 0x6, type: 0x11)
		int maxStackSize; // 0x2c0 (size: 0x4, flags: 0x6, type: 0x8)
		bool displayHealth; // 0x2c4 (size: 0x1, flags: 0x6, type: 0x2)
		bool needsBuildingPrivilegeToUse; // 0x2c5 (size: 0x1, flags: 0x6, type: 0x2)
		UnityEngine::Vector3 dropPosition; // 0x2c8 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 dropVelocity; // 0x2d4 (size: 0xc, flags: 0x6, type: 0x11)
		ItemCategory onlyAcceptCategory; // 0x2e0 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x2e8
}
