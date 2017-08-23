#pragma once

#include "..\GameMenu\Option.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class LootableCorpse : public BaseCorpse // 0x208
	{
	public:
		GameMenu::Option __menuOption_Menu_Open; // 0x208 (size: 0x58, flags: 0x1, type: 0x11)
		UnityEngine::UnicodeString* lootPanelName; // 0x260 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* _playerName; // 0x268 (size: 0x8, flags: 0x86, type: 0xe)
		unsigned __int64 playerSteamID; // 0x270 (size: 0x8, flags: 0x86, type: 0xb)
	}; // size = 0x278
}
