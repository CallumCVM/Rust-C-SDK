#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class ServerDesc : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* Address; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		int Port; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x20
}
