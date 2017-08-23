#pragma once

namespace Smaa
{
	class PredicationPreset : public Object // 0x0
	{
	public:
		float Threshold; // 0x10 (size: 0x4, flags: 0x6, type: 0xc)
		float Scale; // 0x14 (size: 0x4, flags: 0x6, type: 0xc)
		float Strength; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x20
}
