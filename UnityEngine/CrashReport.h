#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\DateTime.h"

namespace UnityEngine
{
	class CrashReport : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* id; // 0x10 (size: 0x8, flags: 0x21, type: 0xe)
		UnityEngine::UnicodeString* text; // 0x18 (size: 0x8, flags: 0x26, type: 0xe)
		System::DateTime time; // 0x20 (size: 0x10, flags: 0x26, type: 0x11)
	}; // size = 0x30
}
