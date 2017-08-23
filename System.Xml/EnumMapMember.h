#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class EnumMapMember : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* _xmlName; // 0x10 (size: 0x8, flags: 0x21, type: 0xe)
		UnityEngine::UnicodeString* _enumName; // 0x18 (size: 0x8, flags: 0x21, type: 0xe)
		UnityEngine::UnicodeString* _documentation; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		__int64 _value; // 0x28 (size: 0x8, flags: 0x21, type: 0xa)
	}; // size = 0x30
}
