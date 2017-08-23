#pragma once

namespace SteamNative
{
	class SocketStatusCallback_t : public ValueType // 0x0
	{
	public:
		unsigned int Socket; // 0x10 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int ListenSocket; // 0x14 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned __int64 SteamIDRemote; // 0x18 (size: 0x8, flags: 0x6, type: 0xb)
		int SNetSocketState; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x28
}
