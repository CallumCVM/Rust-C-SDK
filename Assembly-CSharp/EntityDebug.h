#pragma once

#include "..\System\Diagnostics\Stopwatch.h"

namespace rust 
{
	class EntityDebug : public EntityComponent`1 // 0x20
	{
	public:
		System::Diagnostics::Stopwatch* stopwatch; // 0x20 (size: 0x8, flags: 0x3, type: 0x12)
	}; // size = 0x28
}
