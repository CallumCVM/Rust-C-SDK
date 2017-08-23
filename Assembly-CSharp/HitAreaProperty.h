#pragma once

#include "HitArea.h"

namespace rust 
{
	class HitAreaProperty : public Object // 0x0
	{
	public:
		HitArea area; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
		float damage; // 0x14 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x18
}
