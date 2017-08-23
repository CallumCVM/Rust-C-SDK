#pragma once

#include "..\SteamNative\Result.h"

namespace SteamNative
{
	class AssociateWithClanResult_t : public ValueType // 0x0
	{
	public:
		SteamNative::Result Result; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x18
}
