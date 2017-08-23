#pragma once

namespace SteamNative
{
	class ClanOfficerListResponse_t : public ValueType // 0x0
	{
	public:
		unsigned __int64 SteamIDClan; // 0x10 (size: 0x8, flags: 0x6, type: 0xb)
		int COfficers; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
		unsigned char Success; // 0x1c (size: 0x1, flags: 0x6, type: 0x5)
	}; // size = 0x20
}
