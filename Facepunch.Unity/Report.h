#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\Facepunch\Report\StackTrace.h"

namespace Facepunch
{
	class Report : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* <release>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <message>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <platform>k__BackingField; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <event_id>k__BackingField; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		System.Collections.Generic.Dictionary<UnityEngine::UnicodeString*,UnityEngine::UnicodeString*> <tags>k__BackingField; // 0x30 (size: 0x8, flags: 0x1, type: 0x15)
		Facepunch::Report::StackTrace* <stacktrace>k__BackingField; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x40
}
