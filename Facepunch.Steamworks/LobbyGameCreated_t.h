#pragma once

#include "..\System\UInt16.h"

namespace SteamNative
{
	class LobbyGameCreated_t : public ValueType // 0x0
	{
	public:
		unsigned __int64 SteamIDLobby; // 0x10 (size: 0x8, flags: 0x6, type: 0xb)
		unsigned __int64 SteamIDGameServer; // 0x18 (size: 0x8, flags: 0x6, type: 0xb)
		unsigned int IP; // 0x20 (size: 0x4, flags: 0x6, type: 0x9)
		System::UInt16 Port; // 0x24 (size: 0x2, flags: 0x6, type: 0x7)
	}; // size = 0x28
}
