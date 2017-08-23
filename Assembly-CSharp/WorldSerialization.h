#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\WorldSerialization\WorldData.h"

namespace rust 
{
	class WorldSerialization : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* <Checksum>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		WorldSerialization::WorldData* world; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		bool <Cached>k__BackingField; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
