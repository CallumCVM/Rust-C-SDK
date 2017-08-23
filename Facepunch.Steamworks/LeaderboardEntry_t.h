#pragma once

namespace SteamNative
{
	class LeaderboardEntry_t : public ValueType // 0x0
	{
	public:
		unsigned __int64 SteamIDUser; // 0x10 (size: 0x8, flags: 0x6, type: 0xb)
		int GlobalRank; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
		int Score; // 0x1c (size: 0x4, flags: 0x6, type: 0x8)
		int CDetails; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
		unsigned __int64 UGC; // 0x28 (size: 0x8, flags: 0x6, type: 0xb)
	}; // size = 0x30
}
