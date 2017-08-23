#pragma once

#include "..\SteamNative\Result.h"

namespace SteamNative
{
	class SetPersonaNameResponse_t : public ValueType // 0x0
	{
	public:
		bool Success; // 0x10 (size: 0x1, flags: 0x1006, type: 0x2)
		bool LocalSuccess; // 0x11 (size: 0x1, flags: 0x1006, type: 0x2)
		SteamNative::Result Esult; // 0x14 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x18
}
