#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class UriScheme : public ValueType // 0x0
	{
	public:
		UnityEngine::UnicodeString* scheme; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* delimiter; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		int defaultPort; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x28
}
