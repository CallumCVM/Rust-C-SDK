#pragma once

#include "..\System\Array.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class CollectionItemFixup : public Object // 0x0
	{
	public:
		System::Array* list; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* id; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		int index; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x28
}
