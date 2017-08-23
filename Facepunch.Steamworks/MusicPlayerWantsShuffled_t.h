#pragma once

namespace SteamNative
{
	class MusicPlayerWantsShuffled_t : public ValueType // 0x0
	{
	public:
		bool Shuffled; // 0x10 (size: 0x1, flags: 0x1006, type: 0x2)
	}; // size = 0x18
}
