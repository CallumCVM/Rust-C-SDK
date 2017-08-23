#pragma once

namespace SteamNative
{
	class SteamParamStringArray_t : public ValueType // 0x0
	{
	public:
		__int64 Strings; // 0x10 (size: 0x8, flags: 0x6, type: 0x18)
		int NumStrings; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x20
}
