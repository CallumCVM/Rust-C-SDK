#pragma once

#include "ListHashSet<FoliagePlacement>.h"
#include "ListHashSet<FoliageRenderer>.h"
#include "..\UnityEngine\List.h"
#include "FoliageGrid.h"
#include "FoliageCell.h"
#include "FoliageKey.h"

namespace rust 
{
	class FoliageGroup : public Object // 0x0
	{
	public:
		ListHashSet<FoliagePlacement> Placements; // 0x10 (size: 0x8, flags: 0x6, type: 0x15)
		ListHashSet<FoliageRenderer> Renderers; // 0x18 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<FoliageRenderer>* TempRenderers; // 0x20 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<MeshDataBatch>* Batches; // 0x28 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<MeshDataBatch>* TempBatches; // 0x30 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<MeshInstance>* TempInstances; // 0x38 (size: 0x8, flags: 0x6, type: 0x15)
		FoliageGrid* grid; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		FoliageCell* cell; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		FoliageKey key; // 0x50 (size: 0x8, flags: 0x1, type: 0x11)
		float LOD; // 0x58 (size: 0x4, flags: 0x6, type: 0xc)
		bool NeedsRefresh; // 0x5c (size: 0x1, flags: 0x6, type: 0x2)
		bool Processing; // 0x5d (size: 0x1, flags: 0x6, type: 0x2)
		bool Preserving; // 0x5e (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x60
}
