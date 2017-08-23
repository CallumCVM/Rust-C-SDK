#pragma once

#include "GameObjectRef.h"

namespace rust 
{
	class RepairBench : public StorageContainer // 0x2e8
	{
	public:
		GameObjectRef* skinchangeEffect; // 0x2e8 (size: 0x8, flags: 0x6, type: 0x12)
		float maxConditionLostOnRepair; // 0x2f0 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x2f8
}
