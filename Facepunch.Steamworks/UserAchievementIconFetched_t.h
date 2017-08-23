#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace SteamNative
{
	class UserAchievementIconFetched_t : public ValueType // 0x0
	{
	public:
		unsigned __int64 GameID; // 0x10 (size: 0x8, flags: 0x6, type: 0xb)
		UnityEngine::UnicodeString* AchievementName; // 0x18 (size: 0x8, flags: 0x1006, type: 0xe)
		bool Achieved; // 0x20 (size: 0x1, flags: 0x1006, type: 0x2)
		int IconHandle; // 0x24 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x28
}
