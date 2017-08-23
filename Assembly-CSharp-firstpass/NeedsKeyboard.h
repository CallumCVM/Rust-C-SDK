#pragma once

#include "..\UnityEngine\Events\UnityEvent.h"

namespace rust 
{
	class NeedsKeyboard : public ListComponent`1 // 0x18
	{
	public:
		UnityEngine::Events::UnityEvent* onNoKeysDown; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		bool watchForNoKeys; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
