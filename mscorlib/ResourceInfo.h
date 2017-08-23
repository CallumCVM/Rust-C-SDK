#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class ResourceInfo : public ValueType // 0x0
	{
	public:
		__int64 ValuePosition; // 0x10 (size: 0x8, flags: 0x26, type: 0xa)
		UnityEngine::UnicodeString* ResourceName; // 0x18 (size: 0x8, flags: 0x26, type: 0xe)
		int TypeIndex; // 0x20 (size: 0x4, flags: 0x26, type: 0x8)
	}; // size = 0x28
}
