#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace ProtoBuf
{
	class ServerGib : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* gibName; // 0x10 (size: 0x8, flags: 0x86, type: 0xe)
		bool ShouldPool; // 0x18 (size: 0x1, flags: 0x6, type: 0x2)
		bool _disposed; // 0x19 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x20
}
