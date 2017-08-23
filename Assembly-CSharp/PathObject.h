#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "SpawnFilter.h"
#include "..\PathList\Alignment.h"

namespace rust 
{
	class PathObject : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* Folder; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		SpawnFilter* Filter; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		PathList::Alignment Alignment; // 0x20 (size: 0x4, flags: 0x6, type: 0x11)
		float Density; // 0x24 (size: 0x4, flags: 0x6, type: 0xc)
		float Distance; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
		float Dithering; // 0x2c (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x30
}
