#pragma once

#include "GameObjectRef.h"

namespace rust 
{
	class SupplyDrop : public LootContainer // 0x318
	{
	public:
		GameObjectRef* parachutePrefab; // 0x318 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x320
}
