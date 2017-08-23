#pragma once

namespace SteamNative
{
	class HTML_VerticalScroll_t : public ValueType // 0x0
	{
	public:
		unsigned int UnBrowserHandle; // 0x10 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int UnScrollMax; // 0x14 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int UnScrollCurrent; // 0x18 (size: 0x4, flags: 0x6, type: 0x9)
		float FlPageScale; // 0x1c (size: 0x4, flags: 0x6, type: 0xc)
		bool BVisible; // 0x20 (size: 0x1, flags: 0x1006, type: 0x2)
		unsigned int UnPageSize; // 0x24 (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0x28
}
