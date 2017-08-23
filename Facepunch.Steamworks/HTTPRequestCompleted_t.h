#pragma once

#include "..\SteamNative\HTTPStatusCode.h"

namespace SteamNative
{
	class HTTPRequestCompleted_t : public ValueType // 0x0
	{
	public:
		unsigned int Request; // 0x10 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned __int64 ContextValue; // 0x18 (size: 0x8, flags: 0x6, type: 0xb)
		bool RequestSuccessful; // 0x20 (size: 0x1, flags: 0x1006, type: 0x2)
		SteamNative::HTTPStatusCode StatusCode; // 0x24 (size: 0x4, flags: 0x6, type: 0x11)
		unsigned int BodySize; // 0x28 (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0x30
}
