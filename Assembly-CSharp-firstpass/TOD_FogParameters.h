#pragma once

#include "TOD_FogType.h"

namespace rust 
{
	class TOD_FogParameters : public Object // 0x0
	{
	public:
		TOD_FogType Mode; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
		float HeightBias; // 0x14 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x18
}
