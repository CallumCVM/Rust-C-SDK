#pragma once

namespace rust 
{
	class CC_FastVignette : public CC_Base // 0x28
	{
	public:
		float sharpness; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
		float darkness; // 0x2c (size: 0x4, flags: 0x6, type: 0xc)
		bool desaturate; // 0x30 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x38
}
