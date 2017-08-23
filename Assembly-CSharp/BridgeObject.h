#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class BridgeObject : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* Folder; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		float Distance; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x20
}
