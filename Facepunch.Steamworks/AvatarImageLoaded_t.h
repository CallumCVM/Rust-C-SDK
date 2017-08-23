#pragma once

namespace SteamNative
{
	class AvatarImageLoaded_t : public ValueType // 0x0
	{
	public:
		unsigned __int64 SteamID; // 0x10 (size: 0x8, flags: 0x6, type: 0xb)
		int Image; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
		int Wide; // 0x1c (size: 0x4, flags: 0x6, type: 0x8)
		int Tall; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x28
}
