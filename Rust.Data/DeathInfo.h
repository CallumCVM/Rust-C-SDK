#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class DeathInfo : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* attackerName; // 0x10 (size: 0x8, flags: 0x86, type: 0xe)
		UnityEngine::UnicodeString* hitBone; // 0x18 (size: 0x8, flags: 0x86, type: 0xe)
		UnityEngine::UnicodeString* inflictorName; // 0x20 (size: 0x8, flags: 0x86, type: 0xe)
		unsigned __int64 attackerSteamID; // 0x28 (size: 0x8, flags: 0x86, type: 0xb)
		int lastDamageType; // 0x30 (size: 0x4, flags: 0x86, type: 0x8)
		bool ShouldPool; // 0x34 (size: 0x1, flags: 0x6, type: 0x2)
		bool _disposed; // 0x35 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x38
}
