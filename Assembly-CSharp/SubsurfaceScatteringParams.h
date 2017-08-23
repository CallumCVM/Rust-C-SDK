#pragma once

namespace rust 
{
	class SubsurfaceScatteringParams : public ValueType // 0x0
	{
	public:
		bool enabled; // 0x10 (size: 0x1, flags: 0x6, type: 0x2)
		Quality quality; // 0x14 (size: 0x4, flags: 0x6, type: 0x11)
		bool halfResolution; // 0x18 (size: 0x1, flags: 0x6, type: 0x2)
		float radiusScale; // 0x1c (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x20
}
