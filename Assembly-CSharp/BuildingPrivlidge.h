#pragma once

#include "..\GameMenu\Option.h"
#include "BuildPrivilegeTrigger.h"
#include "..\UnityEngine\List.h"

namespace rust 
{
	class BuildingPrivlidge : public DecayEntity // 0x1f0
	{
	public:
		GameMenu::Option __menuOption_MenuAuthorize; // 0x1f0 (size: 0x58, flags: 0x1, type: 0x11)
		GameMenu::Option __menuOption_MenuClearList; // 0x248 (size: 0x58, flags: 0x1, type: 0x11)
		GameMenu::Option __menuOption_MenuDeauthorize; // 0x2a0 (size: 0x58, flags: 0x1, type: 0x11)
		BuildPrivilegeTrigger* privilegeTrigger; // 0x2f8 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::List<ProtoBuf.PlayerNameID>* authorizedPlayers; // 0x300 (size: 0x8, flags: 0x6, type: 0x15)
	}; // size = 0x308
}
