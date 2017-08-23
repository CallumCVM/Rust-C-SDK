#pragma once

#include "ItemDefinition.h"

namespace rust 
{
	class Repair : public ValueType // 0x0
	{
	public:
		bool enabled; // 0x10 (size: 0x1, flags: 0x6, type: 0x2)
		ItemDefinition* itemTarget; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x20
}
