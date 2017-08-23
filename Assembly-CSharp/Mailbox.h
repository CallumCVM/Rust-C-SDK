#pragma once

#include "..\GameMenu\Option.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "GameObjectRef.h"

namespace rust 
{
	class Mailbox : public StorageContainer // 0x2e8
	{
	public:
		GameMenu::Option __menuOption_Full; // 0x2e8 (size: 0x58, flags: 0x1, type: 0x11)
		UnityEngine::UnicodeString* ownerPanel; // 0x340 (size: 0x8, flags: 0x6, type: 0xe)
		GameObjectRef* mailDropSound; // 0x348 (size: 0x8, flags: 0x6, type: 0x12)
		bool autoSubmitWhenClosed; // 0x350 (size: 0x1, flags: 0x6, type: 0x2)
		bool shouldMarkAsFull; // 0x351 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x358
}
