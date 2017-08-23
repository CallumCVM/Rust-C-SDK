#pragma once

namespace SteamNative
{
	class HTML_SetCursor_t : public ValueType // 0x0
	{
	public:
		unsigned int UnBrowserHandle; // 0x10 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int EMouseCursor; // 0x14 (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0x18
}
