#pragma once

#include "..\ItemContainer\Flag.h"
#include "..\ItemContainer\ContentsType.h"
#include "ItemDefinition.h"
#include "ItemSlot.h"
#include "..\UnityEngine\List.h"

namespace rust 
{
	class ItemModContainer : public ItemMod // 0x20
	{
	public:
		ItemDefinition* onlyAllowedItemType; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		ItemSlot* availableSlots; // 0x28 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::List<ItemAmount>* defaultContents; // 0x30 (size: 0x8, flags: 0x6, type: 0x15)
		int capacity; // 0x38 (size: 0x4, flags: 0x6, type: 0x8)
		int maxStackSize; // 0x3c (size: 0x4, flags: 0x6, type: 0x8)
		ItemContainer::Flag containerFlags; // 0x40 (size: 0x4, flags: 0x6, type: 0x11)
		ItemContainer::ContentsType onlyAllowedContents; // 0x44 (size: 0x4, flags: 0x6, type: 0x11)
		bool openInDeployed; // 0x48 (size: 0x1, flags: 0x6, type: 0x2)
		bool openInInventory; // 0x49 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x50
}
