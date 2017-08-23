#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\WorldSerialization\VectorData.h"

namespace rust 
{
	class PrefabData : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* category; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		WorldSerialization::VectorData* position; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		WorldSerialization::VectorData* rotation; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		WorldSerialization::VectorData* scale; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		unsigned int id; // 0x30 (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0x38
}
