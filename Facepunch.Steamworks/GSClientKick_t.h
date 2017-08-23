#pragma once

#include "..\SteamNative\DenyReason.h"

namespace SteamNative
{
	class GSClientKick_t : public ValueType // 0x0
	{
	public:
		unsigned __int64 SteamID; // 0x10 (size: 0x8, flags: 0x6, type: 0xb)
		SteamNative::DenyReason DenyReason; // 0x18 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x20
}
