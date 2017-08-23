#pragma once

namespace SteamNative
{
	class LeaderboardScoreUploaded_t : public ValueType // 0x0
	{
	public:
		unsigned char Success; // 0x10 (size: 0x1, flags: 0x6, type: 0x5)
		unsigned __int64 SteamLeaderboard; // 0x18 (size: 0x8, flags: 0x6, type: 0xb)
		int Score; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
		unsigned char ScoreChanged; // 0x24 (size: 0x1, flags: 0x6, type: 0x5)
		int GlobalRankNew; // 0x28 (size: 0x4, flags: 0x6, type: 0x8)
		int GlobalRankPrevious; // 0x2c (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x30
}
