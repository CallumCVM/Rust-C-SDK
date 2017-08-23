#pragma once

#include "..\MetabolismAttribute\Type.h"

namespace rust 
{
	class ConsumableEffect : public Object // 0x0
	{
	public:
		MetabolismAttribute::Type type; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
		float amount; // 0x14 (size: 0x4, flags: 0x6, type: 0xc)
		float time; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
		float onlyIfHealthLessThan; // 0x1c (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x20
}
