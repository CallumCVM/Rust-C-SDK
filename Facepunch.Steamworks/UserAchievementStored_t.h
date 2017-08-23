#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace SteamNative
{
	class UserAchievementStored_t : public ValueType // 0x0
	{
	public:
		unsigned __int64 GameID; // 0x10 (size: 0x8, flags: 0x6, type: 0xb)
		bool GroupAchievement; // 0x18 (size: 0x1, flags: 0x1006, type: 0x2)
		UnityEngine::UnicodeString* AchievementName; // 0x20 (size: 0x8, flags: 0x1006, type: 0xe)
		unsigned int CurProgress; // 0x28 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int MaxProgress; // 0x2c (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0x30
}
