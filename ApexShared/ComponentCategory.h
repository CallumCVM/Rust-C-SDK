#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class ComponentCategory : public DynamicArray`1 // 0x20
	{
	public:
		UnityEngine::UnicodeString* name; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		bool isOpen; // 0x28 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x30
}
