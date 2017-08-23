#pragma once

#include "..\GameMenu\Option.h"
#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class SleepingBag : public DecayEntity // 0x1f0
	{
	public:
		GameMenu::Option __menuOption_Menu_AssignToFriend; // 0x1f0 (size: 0x58, flags: 0x1, type: 0x11)
		GameMenu::Option __menuOption_Menu_CloseDoor; // 0x248 (size: 0x58, flags: 0x1, type: 0x11)
		GameMenu::Option __menuOption_Menu_MakeBed; // 0x2a0 (size: 0x58, flags: 0x1, type: 0x11)
		GameMenu::Option __menuOption_Menu_MakePrivate; // 0x2f8 (size: 0x58, flags: 0x1, type: 0x11)
		GameMenu::Option __menuOption_Menu_MakePublic; // 0x350 (size: 0x58, flags: 0x1, type: 0x11)
		UnityEngine::GameObject* renameDialog; // 0x3a8 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* assignDialog; // 0x3b0 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* niceName; // 0x3b8 (size: 0x8, flags: 0x6, type: 0xe)
		unsigned __int64 deployerUserID; // 0x3c0 (size: 0x8, flags: 0x86, type: 0xb)
		float secondsBetweenReuses; // 0x3c8 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Vector3 spawnOffset; // 0x3cc (size: 0xc, flags: 0x6, type: 0x11)
		bool canBePublic; // 0x3d8 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x3e0
}
