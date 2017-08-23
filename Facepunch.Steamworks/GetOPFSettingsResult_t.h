#pragma once

#include "..\SteamNative\Result.h"

namespace SteamNative
{
	class GetOPFSettingsResult_t : public ValueType // 0x0
	{
	public:
		SteamNative::Result Result; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
		unsigned int VideoAppID; // 0x14 (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0x18
}
