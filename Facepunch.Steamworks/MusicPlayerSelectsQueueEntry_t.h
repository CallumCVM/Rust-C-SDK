#pragma once

namespace SteamNative
{
	class MusicPlayerSelectsQueueEntry_t : public ValueType // 0x0
	{
	public:
		int NID; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x18
}
