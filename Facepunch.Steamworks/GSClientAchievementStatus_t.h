#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace SteamNative
{
	class GSClientAchievementStatus_t : public ValueType // 0x0
	{
	public:
		unsigned __int64 SteamID; // 0x10 (size: 0x8, flags: 0x6, type: 0xb)
		UnityEngine::UnicodeString* PchAchievement; // 0x18 (size: 0x8, flags: 0x1006, type: 0xe)
		bool Unlocked; // 0x20 (size: 0x1, flags: 0x1006, type: 0x2)
	}; // size = 0x28
}
