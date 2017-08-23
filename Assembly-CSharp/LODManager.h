#pragma once

#include "..\System\Diagnostics\Stopwatch.h"

namespace rust 
{
	class LODManager : public SingletonComponent`1 // 0x18
	{
	public:
		System::Diagnostics::Stopwatch* watch; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		float MaxMilliseconds; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
		int offset; // 0x24 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x28
}
