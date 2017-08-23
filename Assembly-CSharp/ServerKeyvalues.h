#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class ServerKeyvalues : public ValueType // 0x0
	{
	public:
		UnityEngine::UnicodeString* key; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* value; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
	}; // size = 0x20
}
