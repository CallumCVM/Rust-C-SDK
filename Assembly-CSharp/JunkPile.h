#pragma once

#include "GameObjectRef.h"
#include "SpawnGroup.h"

namespace rust 
{
	class JunkPile : public BaseEntity // 0x130
	{
	public:
		GameObjectRef* sinkEffect; // 0x130 (size: 0x8, flags: 0x6, type: 0x12)
		SpawnGroup* spawngroups; // 0x138 (size: 0x8, flags: 0x6, type: 0x1d)
		float lifetimeMinutes; // 0x140 (size: 0x4, flags: 0x6, type: 0xc)
		float sunkAmount; // 0x144 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x148
}
