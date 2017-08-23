#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class PrefabProperties : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* name; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* guid; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		unsigned int hash; // 0x20 (size: 0x4, flags: 0x6, type: 0x9)
		bool needsWarmup; // 0x24 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x28
}
