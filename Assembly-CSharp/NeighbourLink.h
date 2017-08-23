#pragma once

#include "OBB.h"

namespace rust 
{
	class NeighbourLink : public EntityLink // 0x30
	{
	public:
		OBB obb; // 0x30 (size: 0x50, flags: 0x6, type: 0x11)
	}; // size = 0x80
}
