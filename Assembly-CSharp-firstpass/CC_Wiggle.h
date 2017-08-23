#pragma once

namespace rust 
{
	class CC_Wiggle : public CC_Base // 0x28
	{
	public:
		float timer; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
		float speed; // 0x2c (size: 0x4, flags: 0x6, type: 0xc)
		float scale; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x38
}
