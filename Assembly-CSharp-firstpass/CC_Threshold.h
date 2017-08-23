#pragma once

namespace rust 
{
	class CC_Threshold : public CC_Base // 0x28
	{
	public:
		float threshold; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
		bool useNoise; // 0x2c (size: 0x1, flags: 0x6, type: 0x2)
		float noiseRange; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x38
}
