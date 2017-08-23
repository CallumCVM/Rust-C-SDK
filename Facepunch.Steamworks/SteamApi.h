#pragma once

#include "..\SteamNative\Platform\Interface.h"

namespace SteamNative
{
	class SteamApi : public Object // 0x0
	{
	public:
		SteamNative::Platform::Interface* platform; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
	}; // size = 0x18
}
