#pragma once

#include "LayerSelect.h"
#include "..\UnityEngine\Rendering\ShadowCastingMode.h"
#include "WorldSpaceGrid<FoliageCell>.h"
#include "Vector2i.h"
#include "PrefabPool.h"
#include "..\System\Diagnostics\Stopwatch.h"

namespace rust 
{
	class FoliageGrid : public SingletonComponent`1 // 0x18
	{
	public:
		WorldSpaceGrid<FoliageCell> grid; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		PrefabPool* pool; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Diagnostics::Stopwatch* watch; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		float CellSize; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
		float MaxMilliseconds; // 0x34 (size: 0x4, flags: 0x6, type: 0xc)
		LayerSelect FoliageLayer; // 0x38 (size: 0x4, flags: 0x6, type: 0x11)
		UnityEngine::Rendering::ShadowCastingMode FoliageShadows; // 0x3c (size: 0x4, flags: 0x6, type: 0x11)
		Vector2i curCell; // 0x40 (size: 0x8, flags: 0x1, type: 0x11)
	}; // size = 0x48
}
