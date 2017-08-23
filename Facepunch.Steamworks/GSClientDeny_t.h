#pragma once

#include "..\SteamNative\DenyReason.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace SteamNative
{
	class GSClientDeny_t : public ValueType // 0x0
	{
	public:
		unsigned __int64 SteamID; // 0x10 (size: 0x8, flags: 0x6, type: 0xb)
		SteamNative::DenyReason DenyReason; // 0x18 (size: 0x4, flags: 0x6, type: 0x11)
		UnityEngine::UnicodeString* OptionalText; // 0x20 (size: 0x8, flags: 0x1006, type: 0xe)
	}; // size = 0x28
}
