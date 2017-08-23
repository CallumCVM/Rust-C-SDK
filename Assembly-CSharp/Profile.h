#pragma once

#include "..\System\Diagnostics\Stopwatch.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class Profile : public Object // 0x0
	{
	public:
		System::Diagnostics::Stopwatch* watch; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* category; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* name; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		float warnTime; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x30
}
