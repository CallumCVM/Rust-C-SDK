#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\ProceduralPropertyType.h"

namespace UnityEngine
{
	class ProceduralPropertyDescription : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* name; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* label; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* group; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::ProceduralPropertyType type; // 0x28 (size: 0x4, flags: 0x6, type: 0x11)
		bool hasRange; // 0x2c (size: 0x1, flags: 0x6, type: 0x2)
		float minimum; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
		float maximum; // 0x34 (size: 0x4, flags: 0x6, type: 0xc)
		float step; // 0x38 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::UnicodeString** enumOptions; // 0x40 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::UnicodeString** componentLabels; // 0x48 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x50
}
