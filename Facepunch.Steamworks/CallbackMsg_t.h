#pragma once

namespace SteamNative
{
	class CallbackMsg_t : public ValueType // 0x0
	{
	public:
		int SteamUser; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		int Callback; // 0x14 (size: 0x4, flags: 0x6, type: 0x8)
		__int64 ParamPtr; // 0x18 (size: 0x8, flags: 0x6, type: 0x18)
		int ParamCount; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x28
}
