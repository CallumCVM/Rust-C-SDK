#pragma once

namespace SteamNative
{
	class GSClientApprove_t : public ValueType // 0x0
	{
	public:
		unsigned __int64 SteamID; // 0x10 (size: 0x8, flags: 0x6, type: 0xb)
		unsigned __int64 OwnerSteamID; // 0x18 (size: 0x8, flags: 0x6, type: 0xb)
	}; // size = 0x20
}
