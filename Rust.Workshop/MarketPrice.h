#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class MarketPrice : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* <lowest_price>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <median_price>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		bool <success>k__BackingField; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
		unsigned __int64 <volume>k__BackingField; // 0x28 (size: 0x8, flags: 0x1, type: 0xb)
	}; // size = 0x30
}
