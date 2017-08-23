#pragma once

#include "..\SteamNative\Result.h"

namespace SteamNative
{
	class SteamInventoryResultReady_t : public ValueType // 0x0
	{
	public:
		int Handle; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		SteamNative::Result Esult; // 0x14 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x18
}
