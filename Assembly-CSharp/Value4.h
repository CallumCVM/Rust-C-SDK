#pragma once

#include "T.h"

namespace rust 
{
template <typename T0>
	class Value4 : public Object // 0x0
	{
	public:
		T Dawn; // 0x10 (size: 0x8, flags: 0x6, type: 0x13)
		T Noon; // 0x18 (size: 0x8, flags: 0x6, type: 0x13)
		T Dusk; // 0x20 (size: 0x8, flags: 0x6, type: 0x13)
		T Night; // 0x28 (size: 0x8, flags: 0x6, type: 0x13)
	}; // size = 0x30
}
