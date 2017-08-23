#pragma once

namespace SteamNative
{
	class MusicPlayerWantsLooped_t : public ValueType // 0x0
	{
	public:
		bool Looped; // 0x10 (size: 0x1, flags: 0x1006, type: 0x2)
	}; // size = 0x18
}
