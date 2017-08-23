#pragma once

#include "Vector2i.h"

namespace rust 
{
	class EngagementInfo : public Object // 0x0
	{
	public:
		Vector2i Coord; // 0x10 (size: 0x8, flags: 0x3, type: 0x11)
		float LastEngagementTime; // 0x18 (size: 0x4, flags: 0x3, type: 0xc)
		float Intensity; // 0x1c (size: 0x4, flags: 0x3, type: 0xc)
		float TimeLastSeenByPlayer; // 0x20 (size: 0x4, flags: 0x3, type: 0xc)
	}; // size = 0x28
}
