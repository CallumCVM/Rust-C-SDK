#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace UnityEngine
{
	class CacheIndex : public ValueType // 0x0
	{
	public:
		UnityEngine::UnicodeString* name; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		int bytesUsed; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
		int expires; // 0x1c (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x20
}
