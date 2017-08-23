#pragma once

namespace SteamNative
{
	class GameLobbyJoinRequested_t : public ValueType // 0x0
	{
	public:
		unsigned __int64 SteamIDLobby; // 0x10 (size: 0x8, flags: 0x6, type: 0xb)
		unsigned __int64 SteamIDFriend; // 0x18 (size: 0x8, flags: 0x6, type: 0xb)
	}; // size = 0x20
}
