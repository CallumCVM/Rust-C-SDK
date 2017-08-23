#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\Object.h"

namespace rust 
{
	class NamedObject : public ValueType // 0x0
	{
	public:
		UnityEngine::UnicodeString* name; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::Object* obj; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x20
}
