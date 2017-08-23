#pragma once

#include "LODDistanceMode.h"
#include "LODCell.h"

namespace rust 
{
	class LODComponent : public BaseMonoBehaviour // 0x18
	{
	public:
		LODCell* cell; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		LODDistanceMode DistanceMode; // 0x20 (size: 0x4, flags: 0x6, type: 0x11)
		bool culled; // 0x24 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
