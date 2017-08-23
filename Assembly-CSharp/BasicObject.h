#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "SpawnFilter.h"
#include "..\PathList\Placement.h"

namespace rust 
{
	class BasicObject : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* Folder; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		SpawnFilter* Filter; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		PathList::Placement Placement; // 0x20 (size: 0x4, flags: 0x6, type: 0x11)
		bool AlignToNormal; // 0x24 (size: 0x1, flags: 0x6, type: 0x2)
		bool HeightToTerrain; // 0x25 (size: 0x1, flags: 0x6, type: 0x2)
		float Offset; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x30
}
