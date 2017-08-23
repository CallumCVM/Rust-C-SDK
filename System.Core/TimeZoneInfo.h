#pragma once

#include "..\System\TimeSpan.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\TimeZoneInfo\AdjustmentRule.h"

namespace System
{
	class TimeZoneInfo : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* daylightDisplayName; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* displayName; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* id; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* standardDisplayName; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		System::TimeZoneInfo::AdjustmentRule* adjustmentRules; // 0x30 (size: 0x8, flags: 0x1, type: 0x1d)
		System::TimeSpan baseUtcOffset; // 0x38 (size: 0x8, flags: 0x1, type: 0x11)
		bool disableDaylightSavingTime; // 0x40 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x48
}
