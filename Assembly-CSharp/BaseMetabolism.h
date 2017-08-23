#pragma once

#include "T.h"
#include "MetabolismAttribute.h"

namespace rust 
{
template <typename T0>
	class BaseMetabolism : public EntityComponent`1 // 0x20
	{
	public:
		T owner; // 0x20 (size: 0x8, flags: 0x4, type: 0x13)
		MetabolismAttribute* calories; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		MetabolismAttribute* hydration; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		MetabolismAttribute* heartrate; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x40
}
