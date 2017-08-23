#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace UnityEngine
{
	class ContextMenuItemAttribute : public PropertyAttribute // 0x18
	{
	public:
		UnityEngine::UnicodeString* name; // 0x18 (size: 0x8, flags: 0x26, type: 0xe)
		UnityEngine::UnicodeString* function; // 0x20 (size: 0x8, flags: 0x26, type: 0xe)
	}; // size = 0x28
}
