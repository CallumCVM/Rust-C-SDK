#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class TypeByNameObject : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* TypeName; // 0x10 (size: 0x8, flags: 0x26, type: 0xe)
		unsigned char* Value; // 0x18 (size: 0x8, flags: 0x26, type: 0x1d)
	}; // size = 0x20
}
