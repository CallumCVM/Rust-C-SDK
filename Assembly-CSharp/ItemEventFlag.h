#pragma once

#include "..\Item\Flag.h"
#include "..\UnityEngine\Events\UnityEvent.h"

namespace rust 
{
	class ItemEventFlag : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Events::UnityEvent* onEnabled; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Events::UnityEvent* onDisable; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		Item::Flag flag; // 0x28 (size: 0x4, flags: 0x6, type: 0x11)
		bool firstRun; // 0x2c (size: 0x1, flags: 0x3, type: 0x2)
		bool lastState; // 0x2d (size: 0x1, flags: 0x3, type: 0x2)
	}; // size = 0x30
}
