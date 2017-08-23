#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Globalization
{
	class RegionInfo : public Object // 0x0
	{
	public:
		int lcid; // 0x10 (size: 0x4, flags: 0x1, type: 0x8)
		int regionId; // 0x14 (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::UnicodeString* iso2Name; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* iso3Name; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* win3Name; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* englishName; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* currencySymbol; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* isoCurrencySymbol; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* currencyEnglishName; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x50
}
