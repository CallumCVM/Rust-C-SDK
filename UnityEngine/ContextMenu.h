#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace UnityEngine
{
	class ContextMenu : public Attribute // 0x0
	{
	public:
		UnityEngine::UnicodeString* menuItem; // 0x10 (size: 0x8, flags: 0x26, type: 0xe)
		bool validate; // 0x18 (size: 0x1, flags: 0x26, type: 0x2)
		int priority; // 0x1c (size: 0x4, flags: 0x26, type: 0x8)
	}; // size = 0x20
}
