#pragma once

#include "..\SteamNative\Result.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace SteamNative
{
	class GetVideoURLResult_t : public ValueType // 0x0
	{
	public:
		SteamNative::Result Result; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
		unsigned int VideoAppID; // 0x14 (size: 0x4, flags: 0x6, type: 0x9)
		UnityEngine::UnicodeString* URL; // 0x18 (size: 0x8, flags: 0x1006, type: 0xe)
	}; // size = 0x20
}
