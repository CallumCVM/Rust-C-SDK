#pragma once

#include "..\FloatConditions\Condition.h"

namespace rust 
{
	class FloatConditions : public Object // 0x0
	{
	public:
		FloatConditions::Condition* conditions; // 0x10 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x18
}
