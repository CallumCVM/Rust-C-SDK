#pragma once

namespace SteamNative
{
	class GSClientGroupStatus_t : public ValueType // 0x0
	{
	public:
		unsigned __int64 SteamIDUser; // 0x10 (size: 0x8, flags: 0x6, type: 0xb)
		unsigned __int64 SteamIDGroup; // 0x18 (size: 0x8, flags: 0x6, type: 0xb)
		bool Member; // 0x20 (size: 0x1, flags: 0x1006, type: 0x2)
		bool Officer; // 0x21 (size: 0x1, flags: 0x1006, type: 0x2)
	}; // size = 0x28
}
