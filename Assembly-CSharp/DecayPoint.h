#pragma once

#include "Socket_Base.h"

namespace rust 
{
	class DecayPoint : public PrefabAttribute // 0x98
	{
	public:
		Socket_Base* socket; // 0x98 (size: 0x8, flags: 0x6, type: 0x12)
		float protection; // 0xa0 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0xa8
}
