#pragma once

namespace rust 
{
	class CC_HueSaturationValue : public CC_Base // 0x28
	{
	public:
		float hue; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
		float saturation; // 0x2c (size: 0x4, flags: 0x6, type: 0xc)
		float value; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x38
}
