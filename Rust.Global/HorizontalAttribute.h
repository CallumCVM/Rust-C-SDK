#pragma once

namespace rust 
{
	class HorizontalAttribute : public PropertyAttribute // 0x18
	{
	public:
		int count; // 0x14 (size: 0x4, flags: 0x6, type: 0x8)
		int label; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x20
}
