#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "ItemMod.h"
#include "..\BaseEntity\Menu\Option.h"

namespace rust 
{
	class ItemModMenuOption : public ItemMod // 0x20
	{
	public:
		UnityEngine::UnicodeString* commandName; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		ItemMod* actionTarget; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		BaseEntity::Menu::Option option; // 0x30 (size: 0x20, flags: 0x6, type: 0x11)
		bool isPrimaryOption; // 0x50 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x58
}
