#pragma once

#include "..\EasyAntiCheat\Server\ClientStatus.h"
#include "..\System\Char.h"

namespace rust 
{
	class ClientUpdate : public ValueType // 0x0
	{
	public:
		__int64 ClientObject; // 0x10 (size: 0x8, flags: 0x6, type: 0x18)
		EasyAntiCheat::Server::ClientStatus Status; // 0x18 (size: 0x4, flags: 0x6, type: 0x11)
		System::Char* Message; // 0x20 (size: 0x8, flags: 0x1006, type: 0x1d)
		__int64 TimeBanExpires; // 0x28 (size: 0x8, flags: 0x6, type: 0xa)
	}; // size = 0x30
}
