#pragma once

#include "MinMax.h"

namespace rust 
{
	class DecalScale : public DecalComponent // 0x98
	{
	public:
		MinMax* range; // 0x98 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0xa0
}
