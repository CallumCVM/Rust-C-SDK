#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class SocketMod_Attraction : public SocketMod // 0xa8
	{
	public:
		UnityEngine::UnicodeString* groupName; // 0xa8 (size: 0x8, flags: 0x6, type: 0xe)
		float outerRadius; // 0xb0 (size: 0x4, flags: 0x6, type: 0xc)
		float innerRadius; // 0xb4 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0xb8
}
