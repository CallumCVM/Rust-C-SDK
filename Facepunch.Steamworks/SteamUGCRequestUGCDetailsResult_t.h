#pragma once

#include "..\SteamNative\SteamUGCDetails_t.h"

namespace SteamNative
{
	class SteamUGCRequestUGCDetailsResult_t : public ValueType // 0x0
	{
	public:
		SteamNative::SteamUGCDetails_t Details; // 0x10 (size: 0x88, flags: 0x6, type: 0x11)
		bool CachedData; // 0x98 (size: 0x1, flags: 0x1006, type: 0x2)
	}; // size = 0xa0
}
