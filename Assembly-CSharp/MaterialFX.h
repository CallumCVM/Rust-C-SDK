#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "GameObjectRef.h"

namespace rust 
{
	class MaterialFX : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* materialName; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		GameObjectRef* fx; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x20
}
