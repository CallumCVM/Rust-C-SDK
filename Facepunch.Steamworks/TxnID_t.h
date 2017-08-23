#pragma once

#include "..\SteamNative\GID_t.h"

namespace SteamNative
{
	class TxnID_t : public ValueType // 0x0
	{
	public:
		SteamNative::GID_t Value; // 0x10 (size: 0x8, flags: 0x6, type: 0x11)
	}; // size = 0x18
}
