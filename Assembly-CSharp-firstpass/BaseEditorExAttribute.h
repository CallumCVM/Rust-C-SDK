#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class BaseEditorExAttribute : public PropertyAttribute // 0x18
	{
	public:
		UnityEngine::UnicodeString* isTrue; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* isFalse; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
	}; // size = 0x28
}
