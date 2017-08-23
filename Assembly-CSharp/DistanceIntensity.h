#pragma once

namespace rust 
{
	class DistanceIntensity : public Object // 0x0
	{
	public:
		float distance; // 0x10 (size: 0x4, flags: 0x6, type: 0xc)
		float raiseTo; // 0x14 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x18
}
