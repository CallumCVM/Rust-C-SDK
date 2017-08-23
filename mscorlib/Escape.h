#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class Escape : public ValueType // 0x0
	{
	public:
		UnityEngine::UnicodeString* Source; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		int Index; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
		int Start; // 0x1c (size: 0x4, flags: 0x6, type: 0x8)
		int End; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
		int Optional; // 0x24 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x28
}
