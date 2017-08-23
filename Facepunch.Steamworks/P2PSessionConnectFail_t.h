#pragma once

namespace SteamNative
{
	class P2PSessionConnectFail_t : public ValueType // 0x0
	{
	public:
		unsigned __int64 SteamIDRemote; // 0x10 (size: 0x8, flags: 0x6, type: 0xb)
		unsigned char P2PSessionError; // 0x18 (size: 0x1, flags: 0x6, type: 0x5)
	}; // size = 0x20
}
