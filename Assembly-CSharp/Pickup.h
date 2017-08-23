#pragma once

#include "ItemDefinition.h"

namespace rust 
{
	class Pickup : public ValueType // 0x0
	{
	public:
		bool enabled; // 0x10 (size: 0x1, flags: 0x6, type: 0x2)
		ItemDefinition* itemTarget; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		int itemCount; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
		bool setConditionFromHealth; // 0x24 (size: 0x1, flags: 0x6, type: 0x2)
		float subtractCondition; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
		bool requireBuildingPrivilege; // 0x2c (size: 0x1, flags: 0x6, type: 0x2)
		bool requireHammer; // 0x2d (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x30
}
