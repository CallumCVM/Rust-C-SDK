#pragma once

namespace SteamNative
{
	class P2PSessionRequest_t : public ValueType // 0x0
	{
	public:
		unsigned __int64 SteamIDRemote; // 0x10 (size: 0x8, flags: 0x6, type: 0xb)
	}; // size = 0x18
}
