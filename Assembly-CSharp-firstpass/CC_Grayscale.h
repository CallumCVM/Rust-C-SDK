#pragma once

namespace rust 
{
	class CC_Grayscale : public CC_Base // 0x28
	{
	public:
		float redLuminance; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
		float greenLuminance; // 0x2c (size: 0x4, flags: 0x6, type: 0xc)
		float blueLuminance; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
		float amount; // 0x34 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x38
}
