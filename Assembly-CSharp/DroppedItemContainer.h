#pragma once

#include "..\GameMenu\Option.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class DroppedItemContainer : public BaseCombatEntity // 0x1e8
	{
	public:
		GameMenu::Option __menuOption_Menu_Open; // 0x1e8 (size: 0x58, flags: 0x1, type: 0x11)
		UnityEngine::UnicodeString* lootPanelName; // 0x240 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* _playerName; // 0x248 (size: 0x8, flags: 0x86, type: 0xe)
		unsigned __int64 playerSteamID; // 0x250 (size: 0x8, flags: 0x86, type: 0xb)
	}; // size = 0x258
}
