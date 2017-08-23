#pragma once

#include "..\System\UInt16.h"

namespace SteamNative
{
	class ClientGameServerDeny_t : public ValueType // 0x0
	{
	public:
		unsigned int AppID; // 0x10 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int GameServerIP; // 0x14 (size: 0x4, flags: 0x6, type: 0x9)
		System::UInt16 GameServerPort; // 0x18 (size: 0x2, flags: 0x6, type: 0x7)
		System::UInt16 Secure; // 0x1a (size: 0x2, flags: 0x6, type: 0x7)
		unsigned int Reason; // 0x1c (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0x20
}
