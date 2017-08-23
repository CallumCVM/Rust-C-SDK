#pragma once

namespace SteamNative
{
	class GameConnectedClanChatMsg_t : public ValueType // 0x0
	{
	public:
		unsigned __int64 SteamIDClanChat; // 0x10 (size: 0x8, flags: 0x6, type: 0xb)
		unsigned __int64 SteamIDUser; // 0x18 (size: 0x8, flags: 0x6, type: 0xb)
		int MessageID; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x28
}
