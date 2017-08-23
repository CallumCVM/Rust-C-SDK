#pragma once

#include "ItemDefinition.h"
#include "ItemSlot.h"
#include "..\UnityEngine\List.h"
#include "Item.h"
#include "BasePlayer.h"
#include "BaseEntity.h"

namespace rust 
{
	class ItemContainer : public Object // 0x0
	{
	public:
		ItemDefinition* onlyAllowedItem; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		ItemSlot* availableSlots; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::List<Item>* itemList; // 0x20 (size: 0x8, flags: 0x6, type: 0x15)
		Item* parent; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		BasePlayer* playerOwner; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		BaseEntity* entityOwner; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		Flag flags; // 0x40 (size: 0x4, flags: 0x6, type: 0x11)
		ContentsType allowedContents; // 0x44 (size: 0x4, flags: 0x6, type: 0x11)
		int capacity; // 0x48 (size: 0x4, flags: 0x6, type: 0x8)
		unsigned int uid; // 0x4c (size: 0x4, flags: 0x6, type: 0x9)
		bool dirty; // 0x50 (size: 0x1, flags: 0x6, type: 0x2)
		float temperature; // 0x54 (size: 0x4, flags: 0x6, type: 0xc)
		bool isServer; // 0x58 (size: 0x1, flags: 0x6, type: 0x2)
		int maxStackSize; // 0x5c (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x60
}
