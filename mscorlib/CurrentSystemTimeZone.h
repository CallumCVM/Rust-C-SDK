#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Collections\Hashtable.h"
#include "..\System\TimeSpan.h"

namespace System
{
	class CurrentSystemTimeZone : public TimeZone // 0x0
	{
	public:
		UnityEngine::UnicodeString* m_standardName; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* m_daylightName; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		System::Collections::Hashtable* m_CachedDaylightChanges; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		__int64 m_ticksOffset; // 0x28 (size: 0x8, flags: 0x1, type: 0xa)
		System::TimeSpan utcOffsetWithOutDLS; // 0x30 (size: 0x8, flags: 0x81, type: 0x11)
		System::TimeSpan utcOffsetWithDLS; // 0x38 (size: 0x8, flags: 0x81, type: 0x11)
	}; // size = 0x40
}
