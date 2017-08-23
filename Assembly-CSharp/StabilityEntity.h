#pragma once

namespace rust 
{
	class StabilityEntity : public DecayEntity // 0x1f0
	{
	public:
		bool grounded; // 0x1f0 (size: 0x1, flags: 0x6, type: 0x2)
		float cachedStability; // 0x1f4 (size: 0x4, flags: 0x86, type: 0xc)
		int cachedDistanceFromGround; // 0x1f8 (size: 0x4, flags: 0x86, type: 0x8)
	}; // size = 0x200
}
