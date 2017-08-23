#pragma once

#include "..\System\Int16.h"

namespace SteamNative
{
	class FriendsGroupID_t : public ValueType // 0x0
	{
	public:
		System::Int16 Value; // 0x10 (size: 0x2, flags: 0x6, type: 0x6)
	}; // size = 0x18
}
