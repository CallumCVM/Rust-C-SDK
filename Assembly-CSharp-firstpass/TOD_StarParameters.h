#pragma once

#include "TOD_StarsPositionType.h"

namespace rust 
{
	class TOD_StarParameters : public Object // 0x0
	{
	public:
		float Size; // 0x10 (size: 0x4, flags: 0x6, type: 0xc)
		float Brightness; // 0x14 (size: 0x4, flags: 0x6, type: 0xc)
		TOD_StarsPositionType Position; // 0x18 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x20
}
