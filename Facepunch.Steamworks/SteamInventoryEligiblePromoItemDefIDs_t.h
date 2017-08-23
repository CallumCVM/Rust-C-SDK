#pragma once

#include "..\SteamNative\Result.h"

namespace SteamNative
{
	class SteamInventoryEligiblePromoItemDefIDs_t : public ValueType // 0x0
	{
	public:
		SteamNative::Result Esult; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
		unsigned __int64 SteamID; // 0x14 (size: 0x8, flags: 0x6, type: 0xb)
		int UmEligiblePromoItemDefs; // 0x1c (size: 0x4, flags: 0x6, type: 0x8)
		bool CachedData; // 0x20 (size: 0x1, flags: 0x1006, type: 0x2)
	}; // size = 0x28
}
