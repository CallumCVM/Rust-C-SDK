#pragma once

#include "WorldSpaceGrid<RendererCell>.h"
#include "PrefabPool.h"
#include "..\System\Diagnostics\Stopwatch.h"

namespace rust 
{
	class RendererGrid : public SingletonComponent`1 // 0x18
	{
	public:
		WorldSpaceGrid<RendererCell> grid; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		PrefabPool* pool; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Diagnostics::Stopwatch* watch; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		float CellSize; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
		float MaxMilliseconds; // 0x34 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x38
}
