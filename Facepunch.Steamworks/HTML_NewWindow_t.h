#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace SteamNative
{
	class HTML_NewWindow_t : public ValueType // 0x0
	{
	public:
		unsigned int UnBrowserHandle; // 0x10 (size: 0x4, flags: 0x6, type: 0x9)
		UnityEngine::UnicodeString* PchURL; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		unsigned int UnX; // 0x20 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int UnY; // 0x24 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int UnWide; // 0x28 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int UnTall; // 0x2c (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int UnNewWindow_BrowserHandle; // 0x30 (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0x38
}
