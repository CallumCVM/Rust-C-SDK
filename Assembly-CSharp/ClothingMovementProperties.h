#pragma once

namespace rust 
{
	class ClothingMovementProperties : public ScriptableObject // 0x18
	{
	public:
		float speedReduction; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
		float minSpeedReduction; // 0x1c (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x20
}
