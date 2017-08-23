#pragma once

namespace rust 
{
	class TOD_WorldParameters : public Object // 0x0
	{
	public:
		float Latitude; // 0x10 (size: 0x4, flags: 0x6, type: 0xc)
		float Longitude; // 0x14 (size: 0x4, flags: 0x6, type: 0xc)
		float UTC; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x20
}
