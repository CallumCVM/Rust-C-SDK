#pragma once

#include "..\System\Diagnostics\Stopwatch.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class TimeWarning : public Object // 0x0
	{
	public:
		System::Diagnostics::Stopwatch* stopwatch; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* warningName; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		double warningMS; // 0x20 (size: 0x8, flags: 0x1, type: 0xd)
		int gcCount; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
		bool disposed; // 0x2c (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x30
}
