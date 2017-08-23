#pragma once

#include "..\System\Char.h"
#include "..\EasyAntiCheat\Server\ClientStatus.h"

namespace rust 
{
	class EAC_CLIENTUPDATE : public ValueType // 0x0
	{
	public:
		unsigned int SizeOfToken; // 0x10 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned char* Token; // 0x18 (size: 0x8, flags: 0x1006, type: 0x1d)
		System::Char* PlayerGUID; // 0x20 (size: 0x8, flags: 0x1006, type: 0x1d)
		System::Char* OwnerGUID; // 0x28 (size: 0x8, flags: 0x1006, type: 0x1d)
		EasyAntiCheat::Server::ClientStatus Status; // 0x30 (size: 0x4, flags: 0x6, type: 0x11)
		System::Char* Message; // 0x38 (size: 0x8, flags: 0x1006, type: 0x1d)
		__int64 TimeBanExpires; // 0x40 (size: 0x8, flags: 0x6, type: 0xa)
	}; // size = 0x48
}
