#pragma once

#include "..\SteamNative\Result.h"

namespace SteamNative
{
	class GSGameplayStats_t : public ValueType // 0x0
	{
	public:
		SteamNative::Result Result; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
		int Rank; // 0x14 (size: 0x4, flags: 0x6, type: 0x8)
		unsigned int TotalConnects; // 0x18 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int TotalMinutesPlayed; // 0x1c (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0x20
}
