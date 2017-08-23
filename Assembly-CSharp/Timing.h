#pragma once

#include "..\System\Diagnostics\Stopwatch.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class Timing : public ValueType // 0x0
	{
	public:
		System::Diagnostics::Stopwatch* sw; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* name; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x20
}
