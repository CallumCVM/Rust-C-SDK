#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\Object.h"

namespace rust 
{
template <typename T0>
	class ResourceRef : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* guid; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::Object* _cachedObject; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
