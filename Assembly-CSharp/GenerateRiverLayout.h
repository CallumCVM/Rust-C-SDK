#pragma once

namespace rust 
{
	class GenerateRiverLayout : public ProceduralComponent // 0x28
	{
	public:
		float Width; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
		float Offset; // 0x2c (size: 0x4, flags: 0x6, type: 0xc)
		float Padding; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
		float Fade; // 0x34 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x38
}
