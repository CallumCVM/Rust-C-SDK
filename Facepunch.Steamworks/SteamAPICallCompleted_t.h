#pragma once

namespace SteamNative
{
	class SteamAPICallCompleted_t : public ValueType // 0x0
	{
	public:
		unsigned __int64 AsyncCall; // 0x10 (size: 0x8, flags: 0x6, type: 0xb)
		int Callback; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
		unsigned int ParamCount; // 0x1c (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0x20
}
