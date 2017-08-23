#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace SteamNative
{
	class HTML_ShowToolTip_t : public ValueType // 0x0
	{
	public:
		unsigned int UnBrowserHandle; // 0x10 (size: 0x4, flags: 0x6, type: 0x9)
		UnityEngine::UnicodeString* PchMsg; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
	}; // size = 0x20
}
