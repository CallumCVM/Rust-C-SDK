#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class TagName : public ValueType // 0x0
	{
	public:
		UnityEngine::UnicodeString* Name; // 0x10 (size: 0x8, flags: 0x26, type: 0xe)
		UnityEngine::UnicodeString* LocalName; // 0x18 (size: 0x8, flags: 0x26, type: 0xe)
		UnityEngine::UnicodeString* Prefix; // 0x20 (size: 0x8, flags: 0x26, type: 0xe)
	}; // size = 0x28
}
