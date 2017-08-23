#pragma once

#include "BasePlayer.h"
#include "BaseEntity.h"

namespace rust 
{
	class targetinfo : public Object // 0x0
	{
	public:
		BasePlayer* ply; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		BaseEntity* ent; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		float lastSeenTime; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
		float visibleFor; // 0x24 (size: 0x4, flags: 0x6, type: 0xc)
		float nextLOSCheck; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x30
}
