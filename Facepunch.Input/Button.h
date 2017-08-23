#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class Button : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* Name; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		System.Func<bool> TestFunction; // 0x18 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::UnicodeString** Binds; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
		bool CurrentValue; // 0x28 (size: 0x1, flags: 0x6, type: 0x2)
		bool LastValue; // 0x29 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x30
}
