#pragma once

#include "TrappableWildlife.h"

namespace rust 
{
	class WildlifeWeight : public Object // 0x0
	{
	public:
		TrappableWildlife* wildlife; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		int weight; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x20
}
