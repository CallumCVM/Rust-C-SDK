#pragma once

namespace SteamNative
{
	class HTML_CanGoBackAndForward_t : public ValueType // 0x0
	{
	public:
		unsigned int UnBrowserHandle; // 0x10 (size: 0x4, flags: 0x6, type: 0x9)
		bool BCanGoBack; // 0x14 (size: 0x1, flags: 0x1006, type: 0x2)
		bool BCanGoForward; // 0x15 (size: 0x1, flags: 0x1006, type: 0x2)
	}; // size = 0x18
}
