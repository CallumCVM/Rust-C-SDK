#pragma once

#include "..\SteamNative\Result.h"

namespace SteamNative
{
	class FriendsEnumerateFollowingList_t : public ValueType // 0x0
	{
	public:
		SteamNative::Result Result; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
		unsigned __int64* GSteamID; // 0x18 (size: 0x8, flags: 0x1006, type: 0x1d)
		int ResultsReturned; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
		int TotalResultCount; // 0x24 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x28
}
