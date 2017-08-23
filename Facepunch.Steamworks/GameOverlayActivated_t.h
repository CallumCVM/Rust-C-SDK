#pragma once

namespace SteamNative
{
	class GameOverlayActivated_t : public ValueType // 0x0
	{
	public:
		unsigned char Active; // 0x10 (size: 0x1, flags: 0x6, type: 0x5)
	}; // size = 0x18
}
