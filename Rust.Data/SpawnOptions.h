#pragma once

#include "..\ProtoBuf\RespawnInformation\SpawnOptions\RespawnType.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class SpawnOptions : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* name; // 0x10 (size: 0x8, flags: 0x86, type: 0xe)
		ProtoBuf::RespawnInformation::SpawnOptions::RespawnType type; // 0x18 (size: 0x4, flags: 0x86, type: 0x11)
		unsigned int id; // 0x1c (size: 0x4, flags: 0x86, type: 0x9)
		float unlockSeconds; // 0x20 (size: 0x4, flags: 0x86, type: 0xc)
		bool ShouldPool; // 0x24 (size: 0x1, flags: 0x6, type: 0x2)
		bool _disposed; // 0x25 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
