#pragma once

namespace SteamNative
{
	class LobbyChatUpdate_t : public ValueType // 0x0
	{
	public:
		unsigned __int64 SteamIDLobby; // 0x10 (size: 0x8, flags: 0x6, type: 0xb)
		unsigned __int64 SteamIDUserChanged; // 0x18 (size: 0x8, flags: 0x6, type: 0xb)
		unsigned __int64 SteamIDMakingChange; // 0x20 (size: 0x8, flags: 0x6, type: 0xb)
		unsigned int GfChatMemberStateChange; // 0x28 (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0x30
}
