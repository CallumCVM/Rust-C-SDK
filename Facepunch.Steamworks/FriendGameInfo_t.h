#pragma once

#include "..\System\UInt16.h"

namespace SteamNative
{
	class FriendGameInfo_t : public ValueType // 0x0
	{
	public:
		unsigned __int64 GameID; // 0x10 (size: 0x8, flags: 0x6, type: 0xb)
		unsigned int GameIP; // 0x18 (size: 0x4, flags: 0x6, type: 0x9)
		System::UInt16 GamePort; // 0x1c (size: 0x2, flags: 0x6, type: 0x7)
		System::UInt16 QueryPort; // 0x1e (size: 0x2, flags: 0x6, type: 0x7)
		unsigned __int64 SteamIDLobby; // 0x20 (size: 0x8, flags: 0x6, type: 0xb)
	}; // size = 0x28
}
