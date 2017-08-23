#pragma once

#include "..\SteamNative\Result.h"
#include "..\System\UInt16.h"

namespace SteamNative
{
	class GSReputation_t : public ValueType // 0x0
	{
	public:
		SteamNative::Result Result; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
		unsigned int ReputationScore; // 0x14 (size: 0x4, flags: 0x6, type: 0x9)
		bool Banned; // 0x18 (size: 0x1, flags: 0x1006, type: 0x2)
		unsigned int BannedIP; // 0x1c (size: 0x4, flags: 0x6, type: 0x9)
		System::UInt16 BannedPort; // 0x20 (size: 0x2, flags: 0x6, type: 0x7)
		unsigned __int64 BannedGameID; // 0x28 (size: 0x8, flags: 0x6, type: 0xb)
		unsigned int BanExpires; // 0x30 (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0x38
}
