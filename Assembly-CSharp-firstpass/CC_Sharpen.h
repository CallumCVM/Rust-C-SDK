#pragma once

namespace rust 
{
	class CC_Sharpen : public CC_Base // 0x28
	{
	public:
		float strength; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
		float clamp; // 0x2c (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x30
}
