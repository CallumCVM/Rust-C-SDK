#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class NumberFormatterScanner : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* fmt; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		int pos; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		int len; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
