#pragma once

#include "..\UnityEngine\Vector3.h"
#include "FoliageGrid.h"
#include "ListDictionary<FoliageKey,FoliageGroup>.h"

namespace rust 
{
	class FoliageCell : public Object // 0x0
	{
	public:
		FoliageGrid* grid; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		ListDictionary<FoliageKey,FoliageGroup> batches; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::Vector3 position; // 0x20 (size: 0xc, flags: 0x6, type: 0x11)
		bool interrupt; // 0x2c (size: 0x1, flags: 0x6, type: 0x2)
		float lod; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
		unsigned int seed; // 0x34 (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0x38
}
