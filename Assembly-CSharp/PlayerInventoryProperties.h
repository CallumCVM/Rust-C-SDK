#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\List.h"

namespace rust 
{
	class PlayerInventoryProperties : public ScriptableObject // 0x18
	{
	public:
		UnityEngine::UnicodeString* niceName; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::List<ItemAmount>* belt; // 0x20 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<ItemAmount>* main; // 0x28 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<ItemAmount>* wear; // 0x30 (size: 0x8, flags: 0x6, type: 0x15)
		int order; // 0x38 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x40
}
