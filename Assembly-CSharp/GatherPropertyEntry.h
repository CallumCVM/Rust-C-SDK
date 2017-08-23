#pragma once

namespace rust 
{
	class GatherPropertyEntry : public Object // 0x0
	{
	public:
		float gatherDamage; // 0x10 (size: 0x4, flags: 0x6, type: 0xc)
		float destroyFraction; // 0x14 (size: 0x4, flags: 0x6, type: 0xc)
		float conditionLost; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x20
}
