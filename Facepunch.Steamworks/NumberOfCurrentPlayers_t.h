#pragma once

namespace SteamNative
{
	class NumberOfCurrentPlayers_t : public ValueType // 0x0
	{
	public:
		unsigned char Success; // 0x10 (size: 0x1, flags: 0x6, type: 0x5)
		int CPlayers; // 0x14 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x18
}
