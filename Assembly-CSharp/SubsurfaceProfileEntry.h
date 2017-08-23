#pragma once

#include "SubsurfaceProfileData.h"
#include "SubsurfaceProfile.h"

namespace rust 
{
	class SubsurfaceProfileEntry : public ValueType // 0x0
	{
	public:
		SubsurfaceProfileData data; // 0x10 (size: 0x24, flags: 0x6, type: 0x11)
		SubsurfaceProfile* profile; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x40
}
