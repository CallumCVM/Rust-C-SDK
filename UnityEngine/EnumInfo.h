#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace UnityEngine
{
	class EnumInfo : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString** names; // 0x10 (size: 0x8, flags: 0x6, type: 0x1d)
		int* values; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::UnicodeString** annotations; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
		bool isFlags; // 0x28 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x30
}
