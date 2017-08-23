#pragma once

#include "..\System\TimeSpan.h"

namespace rust 
{
	class PlaybackStatsData : public Object // 0x0
	{
	public:
		int Frames; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		int Packets; // 0x14 (size: 0x4, flags: 0x6, type: 0x8)
		System::TimeSpan TotalTime; // 0x18 (size: 0x8, flags: 0x6, type: 0x11)
		System::TimeSpan DemoLength; // 0x20 (size: 0x8, flags: 0x6, type: 0x11)
	}; // size = 0x28
}
