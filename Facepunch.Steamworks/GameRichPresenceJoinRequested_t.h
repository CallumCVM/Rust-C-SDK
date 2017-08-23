#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace SteamNative
{
	class GameRichPresenceJoinRequested_t : public ValueType // 0x0
	{
	public:
		unsigned __int64 SteamIDFriend; // 0x10 (size: 0x8, flags: 0x6, type: 0xb)
		UnityEngine::UnicodeString* Connect; // 0x18 (size: 0x8, flags: 0x1006, type: 0xe)
	}; // size = 0x20
}
