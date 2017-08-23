#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Object.h"

namespace rust 
{
	class _Item : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* key; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		System::Object value; // 0x18 (size: 0x8, flags: 0x6, type: 0x1c)
	}; // size = 0x20
}
