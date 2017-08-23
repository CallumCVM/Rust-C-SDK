#pragma once

#include "..\GameMenu\Option.h"
#include "GameObjectRef.h"

namespace rust 
{
	class Door : public AnimatedBuildingBlock // 0x208
	{
	public:
		GameMenu::Option __menuOption_Menu_CloseDoor; // 0x208 (size: 0x58, flags: 0x1, type: 0x11)
		GameMenu::Option __menuOption_Menu_KnockDoor; // 0x260 (size: 0x58, flags: 0x1, type: 0x11)
		GameMenu::Option __menuOption_Menu_OpenDoor; // 0x2b8 (size: 0x58, flags: 0x1, type: 0x11)
		GameMenu::Option __menuOption_Menu_ToggleHatch; // 0x310 (size: 0x58, flags: 0x1, type: 0x11)
		GameObjectRef* knockEffect; // 0x368 (size: 0x8, flags: 0x6, type: 0x12)
		bool canTakeLock; // 0x370 (size: 0x1, flags: 0x6, type: 0x2)
		bool hasHatch; // 0x371 (size: 0x1, flags: 0x6, type: 0x2)
		bool canTakeCloser; // 0x372 (size: 0x1, flags: 0x6, type: 0x2)
		float decayResetTimeLast; // 0x374 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x378
}
