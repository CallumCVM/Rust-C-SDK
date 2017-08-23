#pragma once

namespace rust 
{
	class StatsReceived : public ValueType // 0x0
	{
	public:
		int Result; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		unsigned __int64 SteamId; // 0x18 (size: 0x8, flags: 0x6, type: 0xb)
	}; // size = 0x20
}
