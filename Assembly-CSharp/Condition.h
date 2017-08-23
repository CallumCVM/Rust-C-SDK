#pragma once

#include "..\FloatConditions\Condition\Types.h"

namespace rust 
{
	class Condition : public ValueType // 0x0
	{
	public:
		FloatConditions::Condition::Types type; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
		float value; // 0x14 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x18
}
