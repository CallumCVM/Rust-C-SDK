#pragma once

#include "..\SteamNative\Result.h"

namespace SteamNative
{
	class SteamUGCQueryCompleted_t : public ValueType // 0x0
	{
	public:
		unsigned __int64 Handle; // 0x10 (size: 0x8, flags: 0x6, type: 0xb)
		SteamNative::Result Result; // 0x18 (size: 0x4, flags: 0x6, type: 0x11)
		unsigned int NumResultsReturned; // 0x1c (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int TotalMatchingResults; // 0x20 (size: 0x4, flags: 0x6, type: 0x9)
		bool CachedData; // 0x24 (size: 0x1, flags: 0x1006, type: 0x2)
	}; // size = 0x28
}
