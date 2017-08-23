#pragma once

namespace SteamNative
{
	class Callback : public Object // 0x0
	{
	public:
		__int64 vTablePtr; // 0x10 (size: 0x8, flags: 0x6, type: 0x18)
		unsigned char CallbackFlags; // 0x18 (size: 0x1, flags: 0x6, type: 0x5)
		int CallbackId; // 0x1c (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x20
}
