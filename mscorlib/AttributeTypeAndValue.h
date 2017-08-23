#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class AttributeTypeAndValue : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* oid; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* attrValue; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		int upperBound; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
		unsigned char encoding; // 0x24 (size: 0x1, flags: 0x1, type: 0x5)
	}; // size = 0x28
}
