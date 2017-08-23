#pragma once

namespace rust 
{
	class AddScoreResult : public ValueType // 0x0
	{
	public:
		int Score; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		bool ScoreChanged; // 0x14 (size: 0x1, flags: 0x6, type: 0x2)
		int GlobalRankNew; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
		int GlobalRankPrevious; // 0x1c (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x20
}
