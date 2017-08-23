#pragma once

namespace rust 
{
	class ColorWheelGroup : public PropertyAttribute // 0x18
	{
	public:
		int minSizePerWheel; // 0x14 (size: 0x4, flags: 0x6, type: 0x8)
		int maxSizePerWheel; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x20
}
