#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace Windows
{
	class ConsoleInput : public Object // 0x0
	{
	public:
		System.Action<UnityEngine::UnicodeString*> OnInputText; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::UnicodeString* inputString; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString** statusText; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
		float nextUpdate; // 0x28 (size: 0x4, flags: 0x3, type: 0xc)
	}; // size = 0x30
}
