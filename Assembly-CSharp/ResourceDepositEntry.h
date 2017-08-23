#pragma once

#include "ItemDefinition.h"
#include "..\ResourceDepositManager\ResourceDeposit\surveySpawnType.h"

namespace rust 
{
	class ResourceDepositEntry : public Object // 0x0
	{
	public:
		ItemDefinition* type; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		float efficiency; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
		int amount; // 0x1c (size: 0x4, flags: 0x6, type: 0x8)
		int startAmount; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
		float workNeeded; // 0x24 (size: 0x4, flags: 0x6, type: 0xc)
		float workDone; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
		ResourceDepositManager::ResourceDeposit::surveySpawnType spawnType; // 0x2c (size: 0x4, flags: 0x6, type: 0x11)
		bool isLiquid; // 0x30 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x38
}
