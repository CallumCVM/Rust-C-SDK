#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class PooledString : public ValueType // 0x0
	{
	public:
		UnityEngine::UnicodeString* str; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		unsigned int hash; // 0x18 (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0x20
}
