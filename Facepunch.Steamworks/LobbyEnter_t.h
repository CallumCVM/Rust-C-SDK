#pragma once

namespace SteamNative
{
	class LobbyEnter_t : public ValueType // 0x0
	{
	public:
		unsigned __int64 SteamIDLobby; // 0x10 (size: 0x8, flags: 0x6, type: 0xb)
		unsigned int GfChatPermissions; // 0x18 (size: 0x4, flags: 0x6, type: 0x9)
		bool Locked; // 0x1c (size: 0x1, flags: 0x1006, type: 0x2)
		unsigned int EChatRoomEnterResponse; // 0x20 (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0x28
}
