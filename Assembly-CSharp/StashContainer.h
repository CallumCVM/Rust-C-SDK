#pragma once

#include "..\GameMenu\Option.h"
#include "..\UnityEngine\Transform.h"
#include "GameObjectRef.h"

namespace rust 
{
	class StashContainer : public StorageContainer // 0x2e8
	{
	public:
		GameMenu::Option __menuOption_Menu_HideStash; // 0x2e8 (size: 0x58, flags: 0x1, type: 0x11)
		UnityEngine::Transform* visuals; // 0x340 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* buryEffect; // 0x348 (size: 0x8, flags: 0x6, type: 0x12)
		float burriedOffset; // 0x350 (size: 0x4, flags: 0x6, type: 0xc)
		float raisedOffset; // 0x354 (size: 0x4, flags: 0x6, type: 0xc)
		float uncoverRange; // 0x358 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x360
}
