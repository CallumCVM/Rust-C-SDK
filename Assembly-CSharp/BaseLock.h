#pragma once

#include "..\GameMenu\Option.h"
#include "ItemDefinition.h"

namespace rust 
{
	class BaseLock : public BaseEntity // 0x130
	{
	public:
		GameMenu::Option __menuOption_Menu_RemoveLock; // 0x130 (size: 0x58, flags: 0x1, type: 0x11)
		ItemDefinition* itemType; // 0x188 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x190
}
