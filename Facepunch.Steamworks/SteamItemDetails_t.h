#pragma once

#include "..\System\UInt16.h"

namespace SteamNative
{
	class SteamItemDetails_t : public ValueType // 0x0
	{
	public:
		unsigned __int64 ItemId; // 0x10 (size: 0x8, flags: 0x6, type: 0xb)
		int Definition; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
		System::UInt16 Quantity; // 0x1c (size: 0x2, flags: 0x6, type: 0x7)
		System::UInt16 Flags; // 0x1e (size: 0x2, flags: 0x6, type: 0x7)
	}; // size = 0x20
}
