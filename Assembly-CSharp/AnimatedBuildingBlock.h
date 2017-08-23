#pragma once

namespace rust 
{
	class AnimatedBuildingBlock : public StabilityEntity // 0x200
	{
	public:
		bool animatorNeedsInitializing; // 0x200 (size: 0x1, flags: 0x1, type: 0x2)
		bool animatorIsOpen; // 0x201 (size: 0x1, flags: 0x1, type: 0x2)
		bool isAnimating; // 0x202 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x208
}
