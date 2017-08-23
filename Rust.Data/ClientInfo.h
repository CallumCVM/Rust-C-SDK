#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class ClientInfo : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* name; // 0x10 (size: 0x8, flags: 0x86, type: 0xe)
		UnityEngine::UnicodeString* value; // 0x18 (size: 0x8, flags: 0x86, type: 0xe)
		bool ShouldPool; // 0x20 (size: 0x1, flags: 0x6, type: 0x2)
		bool _disposed; // 0x21 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
