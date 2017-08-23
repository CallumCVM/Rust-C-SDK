#pragma once

#include "FoliagePlacement.h"

namespace rust 
{
	class FoliageSpawn : public MonoBehaviour // 0x18
	{
	public:
		FoliagePlacement* Placement; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x20
}
