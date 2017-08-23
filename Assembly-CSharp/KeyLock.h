#pragma once

#include "..\GameMenu\Option.h"
#include "ItemDefinition.h"

namespace rust 
{
	class KeyLock : public BaseLock // 0x190
	{
	public:
		GameMenu::Option __menuOption_Menu_CreateKey; // 0x190 (size: 0x58, flags: 0x1, type: 0x11)
		GameMenu::Option __menuOption_Menu_Lock; // 0x1e8 (size: 0x58, flags: 0x1, type: 0x11)
		GameMenu::Option __menuOption_Menu_Unlock; // 0x240 (size: 0x58, flags: 0x1, type: 0x11)
		ItemDefinition* keyItemType; // 0x298 (size: 0x8, flags: 0x6, type: 0x12)
		int keyCode; // 0x2a0 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x2a8
}
