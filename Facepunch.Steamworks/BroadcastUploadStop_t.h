#pragma once

#include "..\SteamNative\BroadcastUploadResult.h"

namespace SteamNative
{
	class BroadcastUploadStop_t : public ValueType // 0x0
	{
	public:
		SteamNative::BroadcastUploadResult Result; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x18
}
