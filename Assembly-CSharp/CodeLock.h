#pragma once

#include "..\GameMenu\Option.h"
#include "..\UnityEngine\GameObject.h"
#include "GameObjectRef.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class CodeLock : public BaseLock // 0x190
	{
	public:
		GameMenu::Option __menuOption_Menu_ChangeGuestCode; // 0x190 (size: 0x58, flags: 0x1, type: 0x11)
		GameMenu::Option __menuOption_Menu_ChangeLockCode; // 0x1e8 (size: 0x58, flags: 0x1, type: 0x11)
		GameMenu::Option __menuOption_Menu_Lock; // 0x240 (size: 0x58, flags: 0x1, type: 0x11)
		GameMenu::Option __menuOption_Menu_Unlock; // 0x298 (size: 0x58, flags: 0x1, type: 0x11)
		UnityEngine::GameObject* keyEnterDialog; // 0x2f0 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* effectUnlocked; // 0x2f8 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* effectLocked; // 0x300 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* effectDenied; // 0x308 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* effectCodeChanged; // 0x310 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* effectShock; // 0x318 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* code; // 0x320 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* guestCode; // 0x328 (size: 0x8, flags: 0x1, type: 0xe)
		bool hasCode; // 0x330 (size: 0x1, flags: 0x1, type: 0x2)
		bool hasGuestCode; // 0x331 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x338
}
