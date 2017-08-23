#pragma once

#include "WorldSpaceGrid<LODCell>.h"
#include "Vector2i.h"
#include "..\System\Diagnostics\Stopwatch.h"

namespace rust 
{
	class LODGrid : public SingletonComponent`1 // 0x18
	{
	public:
		WorldSpaceGrid<LODCell> grid; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		System::Diagnostics::Stopwatch* watch; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		float CellSize; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
		float MaxMilliseconds; // 0x2c (size: 0x4, flags: 0x6, type: 0xc)
		Vector2i curCell; // 0x30 (size: 0x8, flags: 0x1, type: 0x11)
	}; // size = 0x38
}
