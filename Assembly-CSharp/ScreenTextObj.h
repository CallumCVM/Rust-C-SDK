#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\Rect.h"

namespace rust 
{
	class ScreenTextObj : public BaseObject // 0x88
	{
	public:
		UnityEngine::UnicodeString* text; // 0x88 (size: 0x8, flags: 0x6, type: 0xe)
		int x; // 0x90 (size: 0x4, flags: 0x6, type: 0x8)
		int y; // 0x94 (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::Rect rect; // 0x98 (size: 0x10, flags: 0x4, type: 0x11)
	}; // size = 0xa8
}
