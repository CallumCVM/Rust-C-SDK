#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class MapData : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* name; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		unsigned char* data; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x20
}
