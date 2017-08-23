#pragma once

#include "GameObjectRef.h"

namespace rust 
{
	class ResearchTable : public StorageContainer // 0x2e8
	{
	public:
		GameObjectRef* researchStartEffect; // 0x2e8 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* researchFailEffect; // 0x2f0 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* researchSuccessEffect; // 0x2f8 (size: 0x8, flags: 0x6, type: 0x12)
		float researchFinishedTime; // 0x300 (size: 0x4, flags: 0x86, type: 0xc)
		float researchCostFraction; // 0x304 (size: 0x4, flags: 0x6, type: 0xc)
		float researchDuration; // 0x308 (size: 0x4, flags: 0x6, type: 0xc)
		int requiredPaper; // 0x30c (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x310
}
