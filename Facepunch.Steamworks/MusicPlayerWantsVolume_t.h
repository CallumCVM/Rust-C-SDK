#pragma once

namespace SteamNative
{
	class MusicPlayerWantsVolume_t : public ValueType // 0x0
	{
	public:
		float NewVolume; // 0x10 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x18
}
