#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class AttributeSlot : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* Name; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* LocalName; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* NS; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* Prefix; // 0x28 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* Value; // 0x30 (size: 0x8, flags: 0x6, type: 0xe)
		bool IsDefault; // 0x38 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x40
}
