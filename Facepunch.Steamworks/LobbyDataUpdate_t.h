#pragma once

namespace SteamNative
{
	class LobbyDataUpdate_t : public ValueType // 0x0
	{
	public:
		unsigned __int64 SteamIDLobby; // 0x10 (size: 0x8, flags: 0x6, type: 0xb)
		unsigned __int64 SteamIDMember; // 0x18 (size: 0x8, flags: 0x6, type: 0xb)
		unsigned char Success; // 0x20 (size: 0x1, flags: 0x6, type: 0x5)
	}; // size = 0x28
}
