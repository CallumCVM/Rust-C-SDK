#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class Key4 : public ValueType // 0x0
	{
	public:
		UnityEngine::UnicodeString* format; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* value1; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* value2; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* value3; // 0x28 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* value4; // 0x30 (size: 0x8, flags: 0x6, type: 0xe)
	}; // size = 0x38
}
