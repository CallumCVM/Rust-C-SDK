#pragma once

#include "TOD_MoonPositionType.h"

namespace rust 
{
	class TOD_MoonParameters : public Object // 0x0
	{
	public:
		float MeshSize; // 0x10 (size: 0x4, flags: 0x6, type: 0xc)
		float MeshBrightness; // 0x14 (size: 0x4, flags: 0x6, type: 0xc)
		float MeshContrast; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
		float HaloSize; // 0x1c (size: 0x4, flags: 0x6, type: 0xc)
		float HaloBrightness; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
		TOD_MoonPositionType Position; // 0x24 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x28
}
