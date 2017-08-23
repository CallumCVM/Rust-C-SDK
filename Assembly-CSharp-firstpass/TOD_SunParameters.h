#pragma once

namespace rust 
{
	class TOD_SunParameters : public Object // 0x0
	{
	public:
		float MeshSize; // 0x10 (size: 0x4, flags: 0x6, type: 0xc)
		float MeshBrightness; // 0x14 (size: 0x4, flags: 0x6, type: 0xc)
		float MeshContrast; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x20
}
