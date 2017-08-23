#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace SteamNative
{
	class HTML_NeedsPaint_t : public ValueType // 0x0
	{
	public:
		unsigned int UnBrowserHandle; // 0x10 (size: 0x4, flags: 0x6, type: 0x9)
		UnityEngine::UnicodeString* PBGRA; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		unsigned int UnWide; // 0x20 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int UnTall; // 0x24 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int UnUpdateX; // 0x28 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int UnUpdateY; // 0x2c (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int UnUpdateWide; // 0x30 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int UnUpdateTall; // 0x34 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int UnScrollX; // 0x38 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int UnScrollY; // 0x3c (size: 0x4, flags: 0x6, type: 0x9)
		float FlPageScale; // 0x40 (size: 0x4, flags: 0x6, type: 0xc)
		unsigned int UnPageSerial; // 0x44 (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0x48
}
