#pragma once

#include "SubsurfaceProfileData.h"

namespace rust 
{
	class SubsurfaceProfile : public ScriptableObject // 0x18
	{
	public:
		SubsurfaceProfileData Data; // 0x18 (size: 0x24, flags: 0x6, type: 0x11)
		int id; // 0x3c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x40
}
