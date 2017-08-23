#pragma once

namespace rust 
{
	class FixedRateStepped : public Object // 0x0
	{
	public:
		float rate; // 0x10 (size: 0x4, flags: 0x6, type: 0xc)
		int maxSteps; // 0x14 (size: 0x4, flags: 0x6, type: 0x8)
		float nextCall; // 0x18 (size: 0x4, flags: 0x3, type: 0xc)
	}; // size = 0x20
}
