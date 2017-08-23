#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class TimeType : public ValueType // 0x0
	{
	public:
		int Offset; // 0x10 (size: 0x4, flags: 0x26, type: 0x8)
		bool IsDst; // 0x14 (size: 0x1, flags: 0x26, type: 0x2)
		UnityEngine::UnicodeString* Name; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
	}; // size = 0x20
}
