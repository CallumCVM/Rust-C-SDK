#pragma once

#include "..\UnityEngine\Vector2.h"

namespace UnityEngine
{
	class UICharInfo : public ValueType // 0x0
	{
	public:
		UnityEngine::Vector2 cursorPos; // 0x10 (size: 0x8, flags: 0x6, type: 0x11)
		float charWidth; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x20
}
