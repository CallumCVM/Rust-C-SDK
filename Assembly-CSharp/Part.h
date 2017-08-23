#pragma once

#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "Item.h"

namespace rust 
{
	class Part : public ValueType // 0x0
	{
	public:
		UnityEngine::GameObject* gameObject; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* name; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		Item* item; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x28
}
