#pragma once

#include "TOD_AmbientType.h"

namespace rust 
{
	class TOD_AmbientParameters : public Object // 0x0
	{
	public:
		TOD_AmbientType Mode; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
		float Saturation; // 0x14 (size: 0x4, flags: 0x6, type: 0xc)
		float UpdateInterval; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x20
}
